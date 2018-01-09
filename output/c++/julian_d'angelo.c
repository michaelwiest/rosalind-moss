1 #!/usr/bin/python
  2
  3 from collections import defaultdict
  4 from operator import itemgetter
  5
  6 count = 0
  7
  8 dataFile = open("temp.txt", "r+")
  9
 10 Lines = dataFile.read().split('\n')
 11
 12 Text =  Lines[0]
 13 Pattern = Lines[1]
 14 k = len(Pattern)
 15
 16 for i in range(len(Text)-len(Pattern)):
 17   if Text[i:i+k] == Pattern:
 18     count = count + 1
 19
 20
 21 print count
 22 #def patternCount(Text, Pattern):
 23   #global count
 24   #for i in range(len(Text)-len(Pattern)):
 25     #if Text[i:i+k] == Pattern:
 26       #count += count
 27       #print count
 28   #return count
 29
 30   #return patternCount(Text, Pattern)