def patternCount(text, pattern):
	count = 0
	for i in range(len(text) - len(pattern) + 1):
		if text[i:(i+len(pattern))] == pattern:
			count = count + 1
			
	return count 

file = open("rosalind_ba1a.txt", "r")
text, pattern = file.readlines() 
text = text.strip('\n')
pattern = pattern.strip('\n')
print patternCount(text, pattern)