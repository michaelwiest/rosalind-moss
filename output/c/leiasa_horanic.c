# Pattern Counter

#patterncount(Text, Pattern)

Text = 'TTGAGTGTTTAGAGTGTTGAGTGTTGTGGAGTGTTGAGTGTTGAGTGTTGGAGTGTTGATTGAGTGTTCTGAGTGTTGAGTGTTGAGTGTTATGTGAGTGTTCTGAGTGTTGAGTGTTGCGGCGACGAGTGTTTACTGAGTGTTGAGTGTTGAGTGTTCGAGTGTTCGAGAGTGTTTCTGAGTGTTGTCACGAGTGTTAGAGTGTTGAGTGTTGCGTGAGTGTTTCGAGTGTTGCCTGTATAGGCGAGTGTTCGCAACAAACGAGTGTTCGAGTGTTTGGAGTGTTCAAGTTGAGAGTGTTAGGAGTGTTGATCTGAGTGTTGAGTGTTCGAGTGTTTACGAGTGTTACAAGAAGAGTGTTGAGTGTTGAGTGTTGAGTGTTATGAGTTGTAGAGTGTTATCGAGTGTTCGCCACTGAGGTAGGGAGTGTTCGAGGAGTGTTATGAGTGTTTTGAGTGTTCGAGTGTTGAGTGTTGATGCATGAGTCGAGTGTTCCCGAGTGTTGAGTGTTGGGAGGAGTGTTCGAGTGTTCGAGTGTTCGAGTGTTTTAGAGTGTTTGAGTGTTCGAGTGTTCGGAGTGTTGCGCGAGGGAGTGTTGAGTGTTGAGTGTTGAGTGTTAGGGAGTGTTAAGAGTGTTTGAGTGTTAGAGTGTTAAGAGTGTTGCGAGTGTTTAGGAGTGTTCATGGAGTGTTGGAGTGTTAGAGTGTTTAGAGTGTTAACGAAACGAGTGTTATTTTGAGTGTTTCCTGAGTGTTGAGTGTTGGAGTGTTCGAGTGTTGAGTGTTCCTGGAGTGTTGCTAGAGTGTTGGAGTGTTGAGTGTTGAGTGTTGTCGCGGGGATCGAGTGTTGGGAGTGTTCTAATGGAGAGTGTTGAGTGTTACCGAAGGAGTGTTTCGCTGAGTGTTAGAGTGTTAGGATGAGTGTTGAGTGTTGAGTGTTTTCAAGCCCCTGAGTGTTGGAGTGTTGAGTGTTCCAGGAGTGTTAGGTGAGTGTTGTTGACGAGTGTTGAGTGTTTGGAGTGTTGTCTGAGTGTTGGCGAGCTATGAGTGTTAAGAGTGTT'
Pattern = 'GAGTGTTGA'

lenText = len(Text)
lenPattern = len(Pattern)

count = 0
currentPat =''
x = 0

for i in range (0, (lenText - lenPattern +1)):
    currentPat = Text[i]
    x = i + 1
    for y in range (0,lenPattern-1):
        currentPat = currentPat + Text[x]
        if str(currentPat) == Pattern:
            count = count + 1
        x = x + 1
        y = y + 1
    currentPat = ''
    i = i + 1
print count