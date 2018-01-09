#!/usr/bin/python

"""
PatternCount(Text, Pattern) takes in a k-mer Pattern and counts the # of times
Pattern appears as a substring of string Text. 

Input: file named patternCountInput.txt

Note: counts overlapping occurrances.

Works by sliding a window of k length down Text and checking whether each
k-mer substring of Text matches Pattern.

Pseudocode:


Given: {DNA strings} Text and Pattern
Return: Count(Text,Pattern)
"""


# Get inputs
try:
  inputFile = open('patternCountInput.txt', 'r')

except IOError:
  print ("""Usage: patternCount(a1p1).py
  Note: Requires file patternCountInput.txt.""")


text = inputFile.readline().rstrip('\n').replace(' ','')
pattern = inputFile.readline().rstrip('\n').replace(' ','')

count = 0

# Note the +1 is so it makes it to the end
for i in range(len(text) - len(pattern) + 1):
  kmer = text[i:i + len(pattern)]
  if kmer == pattern:
    count += 1

print (count)