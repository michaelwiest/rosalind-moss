file = open('rosalind_ba1a.txt', 'r')
text = file.readline()
pattern = file.next()
print text
print pattern 
count = 0
i = 0
t = len(text)
p = len(pattern)
print p
while ( i < (t-p+1)):
	x = text[i:i+p-2]
	str(x)
	str(pattern)
	print x
	print pattern 
	if x in pattern:
		#print "Location in text:"
	#	print x
	#	print "the Pattern: " 
	#	print pattern
		count = count+1
	i = i+1
print "The number of time is :"
print count