# By: Christina Lin                        Date: Jan 7,2016
# compute the number of times a pattern appears
f = open('C:/Users/Christina/Downloads/rosalind_ba1a.txt')
# stores files as a series of lines
lines = f.readlines()
genome = lines[0]
pattern = lines[1]
i= 0
count = 0
# keep looping to search through entire genome
while i < len(genome)-len(pattern):
    index = 0
    # to obtain proper end index of new comparison
    size = i +len(pattern)
    # gets a substring of genome to compare
    compare = genome[i:size]
    flag = compare[index] == pattern[index]
    # compare char by char because string==string didn't work
    while flag:
        flag = compare[index] == pattern[index]
        # counts as match if entire string matched pattern
        if index == len(pattern)- 1:
            count +=1
            flag = False
        else:
            index += 1
    i+=1

print(count)