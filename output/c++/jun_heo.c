#Method: PatternCount

#input: String Text and Pattern

#Output: count of the pattern in a text

def PatternCount(Text, Pattern):

    count = 0

    for i in range(len(Text)-len(Pattern)+1):

        substring = Text[i:i+len(Pattern)]

        #print "index is {} and the substring is {}".format(i, substring)

        if substring == Pattern:

            count = count + 1

    return count

Text = "CTAGGTAGCAAACGTAGCAAACCTCGTAGCAACATGTAGCAAGTAGCAAACTGGTAGCAACCAAATAGTAGCAACTATAAGTAGCAAGGTAGCAAGTAGCAACGGTAGCAAGAGGTAGCAAGTAGCAAAGCGTGTAGCAACGTAGCAAGTAGCAAGTAGCAAGTAGCAATTCTCACAAGTAGCAAAGACATCAGCGTAGCAATTTGTAGCAATTGTAGCAACATTATAAGTAGCAACGGGCCGTTGGAGTAGCAACGCGTAGCAAGCTAGACTGTAGCAAGGTAGCAAGTAGCAATGTAGCAAGTGGGTAGCAACCGCAGTAGCAACCGTAGCAAGTAGCAAGCGTAGCAAGGGTAGCAACGGTAGCAAGCGGGTAGCAACATGGTAGCAAGTGTAGCAAAGTAGCAATGACGTGTAGCAACGCCCGATAAAACGGTAGCAACGTAGCAAACTCGTAGCAATGTAGCAACGCCGTAGCAAAGTAGCAATGTAGCAACGGTAGCAACGTAGCAAGTAGCAACGAACGTAGGACCAGCGTAGCAAAGGTAGCAAGTAGCAAGAGTAGCAAGTAGCAAGTAGCAATGTAGCAATAGCGGTAGCAAGTAGCAACAGCACTGGTAGCAAGTAGCAACGTAGCAACATTCATGTTAACGACGGTGTAGCAAGTAGCAACGGTAGCAAGTAGCAACATCGTAGCAAGTAGCAAAGTAGCAAGTAGCAATCTGCCACGTAGCAAAGCAGGGTAGCAAGTAGCAAACGGTAGCAACACAGTAGCAACTTAACCGCATCTGAATACGTAGCAAGCAATGTAGCAAATAGGTAGCAACCGGGTAGCAAGTAGCAACTGTAGCAATGAAGGTAGCAAGCCGTAGCAAGTAGCAACCGTAGCAAATGTAGCAAGGTAGCAAGTAGCAAGTAGCAATAAGTAGCAAAGTAGCAATTGTAGCAATAGACTA"

Pattern = "GTAGCAAGT"

PatternCount(Text, Pattern)