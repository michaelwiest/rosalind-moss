import os
import mechanize
from bs4 import BeautifulSoup
import urllib2
import cookielib
import httplib
from urlparse import urlparse


class RosalindExporter():
    '''
    Simple class to export code from Rosalind website.
    Instantiate a connection and then export code as shown in main.py

    Could be further optimized with multithreading to speed things up.
    '''
    def __init__(self, url, username, password):
        self.cj = cookielib.CookieJar()
        self.br = mechanize.Browser()
        self.br.set_cookiejar(self.cj)

        self.username = username
        self.password = password
        self.url = url
        parsed_url = urlparse(self.url)
        self.url_base = '{uri.scheme}://{uri.netloc}/'.format(uri=parsed_url)

        self.login()

    def login(self, login_position=2):
        self.br.open(self.url)
        self.br.select_form(nr=login_position)
        self.br.form['username'] = self.username
        self.br.form['password'] = self.password
        self.br.submit()


    def __strip_href_chars(self, href_string):
        href_string = str(href_string)
        split_one = href_string.split('href="')[1]
        return split_one.split('">\n')[0].strip()


    def __get_submission_urls_from_grade_table(self, table, assignment_number, submission_position=0):
        submission_pages = []
        rows = table.find('tbody').find_all('tr')
        for row in rows:
            cols = row.find_all('td')
            submission_page_refs = [self.__strip_href_chars(col.find(href=True)) if col.find(href=True) is not None else None for col in cols]
            submission_pages.append(submission_page_refs)

        code_pages = []
        for student in submission_pages:
            row = []
            assignment = student[assignment_number]
            if assignment is not None:
                self.br.open(self.url_base + assignment)
                soup = BeautifulSoup(self.br.response().read())
                table = soup.find('table')
                final_submission = table.find('tbody').find_all('tr')[submission_position]
                code_pages.append(self.__strip_href_chars(final_submission.find_all('td')[-2]))
            else:
                code_pages.append(None)
        return code_pages

    def __set_names(self, name_table):
        names = name_table.find_all(attrs={'class':'student-name'})
        # self.names = [str(name).split('<td class="student-name">')[-1].split('</td>')[0] for name in names][1:]
        self.names = [name.get_text() for name in names][1:]

    def get_urls_for_assignment_n(self, assignment_number):
        self.br.open(self.url)
        soup = BeautifulSoup(self.br.response().read())
        tables = soup.find_all('table')

        # Assign all student names associated with their assignemnts.
        name_table = tables[0]
        self.__set_names(name_table)

        result_table = tables[2]
        submissions = self.__get_submission_urls_from_grade_table(result_table, assignment_number)
        return submissions

    def get_code_from_submission_urls(self, urls):
        self.code = []
        for url in urls:
            if url is not None:
                self.br.open(self.url_base + url)
                s = BeautifulSoup(self.br.response().read())
                self.code.append(s.find_all('textarea')[-2].get_text())
            else:
                self.code.append('')

    def write_code_to_dir(self, dirname):
        if not os.path.isdir(dirname):
            os.makedirs(dirname)
        for i in xrange(len(self.names)):
            fname = self.names[i].lower().replace(' ', '_') + '.txt'
            with open(os.path.join(dirname, fname), 'w+') as to_write:
                try:
                    to_write.write(self.code[i])
                except:
                    to_write.write('')
