text, pattern = open('1a.txt').read().strip().split('\n')

count = 0

for i in range(0, len(text) - len(pattern) + 1):
	check = text[i:i + len(pattern)]
	if check == pattern:
		count = count + 1

print(count)