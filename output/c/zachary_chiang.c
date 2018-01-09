#!/usr/bin/env python

from sys import stdin

text = stdin.readline().rstrip()
pattern = stdin.readline().rstrip()

#print text, pattern;

count = 0

for i in range(len(text) - len(pattern) + 1):
        if text[i:i+len(pattern)] == pattern:
                count += 1

print count