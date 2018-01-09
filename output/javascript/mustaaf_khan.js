def PatternCount(Text, Pattern):
	count = 0
	for i in range(0, len(text) - len(pattern) + 1):
		k_mer = text[i: i + len(pattern)]
		if(k_mer) == pattern:
			count+= 1
	return count