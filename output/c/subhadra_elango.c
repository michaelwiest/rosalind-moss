'''
PatternCount(Text, Pattern)

A k-mer is a string of length k.
Method counts the number of times a k-mer pattern appears as a substring of Text.

Given: {DNA strings} Text and Pattern
Return: Count(Text, Pattern)

Sample:
GCGCG
GCG

Output: 2
'''

f = open('rosalind_ba1a.txt', 'r')
text = f.readline()
pattern = 'CGGCGAGCG'
count = 0

for i in range(0, (len(text) - len(pattern)) + 1):
    if text[i: i + len(pattern)] == pattern:
        count = count + 1
print count