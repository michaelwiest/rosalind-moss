from sys import argv
script, data_file_name = argv

dataFile = open(data_file_name)

text = dataFile.readline()
pattern = dataFile.readline().rstrip('\n')

textLength = len(text) - 1
patternLength = len(pattern)

print textLength
print patternLength
print pattern

def patternCount(text, pattern):
	count = 0
	for i in range(0, textLength - patternLength + 1):
		if text[i:i+patternLength] == pattern:
			count += 1
	print count
patternCount(text, pattern)