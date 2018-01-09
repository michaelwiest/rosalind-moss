#Get text and pattern information
with open ('rosalind_ba1a.txt') as inputData:
    Text, Pattern = [line.strip() for line in inputData.readlines()]
inputData.close()

#Iterate through the text & count instances of the pattern
patternCount = 0

for i in xrange(len(Text)-len(Pattern)+1):
    if Text[i:i+len(Pattern)] == Pattern:
        patternCount += 1
    i += 1
print patternCount