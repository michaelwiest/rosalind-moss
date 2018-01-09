def PatternCount(text, pattern):

	count = 0
	for i in range(0,(len(text)-len(pattern))+1):
		if text[i : (len(pattern)+i)] == pattern:
			count += 1
	return count


file = open("/Users/niyatiraghavan/Desktop/Rosalind/rosalind_ba1a.txt", "r")
text, pattern = file.readlines()
text = text.strip('\n')
pattern = pattern.strip('\n')
print text
print pattern
print PatternCount(text,pattern)