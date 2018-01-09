# hw01_01.py
# Text p. 7-8
# Given: {DNA strings} Text and Pattern
# Return: Count(Text, Pattern)

"""Slide a window down text. Check whether each
k-mer substring matches pattern
Parameters: text - string, given DNA string
            pattern - string, desired k-mer string
Return: count - int, occurrences of pattern in text"""
def PatternCount(text,pattern):
    count = 0
    tLength = len(text)
    pLength = len(pattern)
    #print 'tLength = ', tLength #DEBUG
    #print 'pLength = ', pLength #DEBUG
    for i in range(0,(tLength-pLength+1)):
        #print 'i = ', i #DEBUG
        if Text(i,pLength,text) == pattern:
            count += 1
            #print 'count =', count #DEBUG
    return count

"""Find k-mer string at position i in text, with k-mer length
Paramters: i - int, 0-based index position in text
        length - int, length of k-mer
        text = string, given DNA string
Return: kMer - string, k-mer at position i"""
def Text(i,pLength,text):
    kMer = text[i:i+pLength]
    #print 'kMer = ', kMer #DEBUG
    return kMer


#Main
"""Open and read file. Last line is pattern"""
#file = open('PatternCount')
#f = file.read()
textIn = raw_input('String: ')
patternIn = raw_input('Pattern: ')
print PatternCount(textIn,patternIn)