# coding: utf-8

# In[ ]:

import argparse


# # Parse

# In[53]:

parser = argparse.ArgumentParser()
parser.add_argument('input_filename', help='Input file')
args = parser.parse_args()


# # Make functions

# In[47]:

def read_file_and_split(filename, delimiter='\n'):
    with open(filename, 'r') as f:
        # Read the entire file content
        content = f.read()
        #print('Content: %s' % content)


        # Split the file's content by lines; ending \n leads to the last line with just ''
        lines = content.split(delimiter)
        #print('Content lines: %s' % lines)
        #print('Content #lines: %s' % len(lines))

        # Save each line in a variable
        line_variables = []
        for i, line in enumerate(lines):
            if line != '':
                exec("line_%s ='%s'" % (i, line))
                line_variables.append(eval('line_%s' % i))
        return line_variables

def count_substring(text, substring):
    count = 0
    for i in range(0, len(text)-len(substring)+1):
        check = text[i:i+len(substring)]
        if substring == check:
            count += 1
    return count


# # Execute

# In[50]:

line_variables = read_file_and_split(args.input_filename)

print('OUTPUT: %s' % count_substring(line_variables[0], line_variables[1]))