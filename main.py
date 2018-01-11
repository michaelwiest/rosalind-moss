import os
import sys
import shutil
from config import *
from scraper import RosalindExporter

def handle_folders(temp_dir, output_dir):

    for d in [temp_dir, output_dir]:
        if not os.path.isdir(d):
            os.makedirs(d)
    for extension in ['ruby', 'python', 'javascript', 'c', 'cc']:
        if not os.path.isdir(os.path.join(output_dir, extension)):
            os.makedirs(os.path.join(output_dir, extension))
        joined_dir = os.path.join(output_dir, extension)
        for f in os.listdir(joined_dir):
            fp = os.path.join(joined_dir, f)
            try:
                if os.path.isfile(fp):
                    os.unlink(fp)
            except Exception as e:
                print(e)

def export_code(url, assignment_number, temp_dir):
    re = RosalindExporter(url, rosalind_username, rosalind_password)
    re.set_urls_for_assignment_n(assignment_number)
    re.get_code_from_submission_urls()
    re.write_code_to_dir(temp_dir)

def classify_code(temp_dir, output_dir):
    os.system('node classifier.js {} {}'.format(temp_dir, output_dir))

def run_moss(output_dir):
    dirs = [x[0] for x in os.walk(output_dir)][1:]
    for d in dirs:
        command = 'perl moss -l {} {}'.format(os.path.basename(d),
                                              os.path.join(d, '*'))
        print '========================================'
        print '========================================'
        print '\nRunning Moss for directory: {}\n'.format(d)
        os.system('perl moss -l {} {}'.format(os.path.basename(d),
                                              os.path.join(d, '*')))


def main():
    url = sys.argv[1]
    assignment_number = int(sys.argv[2])
    temp_dir = 'tmp'
    output_dir = 'output'

    handle_folders(temp_dir, output_dir)
    export_code(url, assignment_number, temp_dir)
    classify_code(temp_dir, output_dir)
    run_moss(output_dir)

    # os.rmdir(temp_dir)

if __name__ == '__main__':
    main()
