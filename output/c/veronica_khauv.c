import sys

input = sys.argv[1]

with open(input, 'r') as input:
	input = input.read()

output = ""

for i in reversed(input):
	output+=i
	
revcomp = ""

for i  in range(0,len(output)):
	if output[i] == 'A':
		revcomp += 'T'
	if output[i] == 'T':
		revcomp += 'A'
	if output[i] == 'C':
		revcomp += 'G'
	if output[i] == 'G':
		revcomp += 'C'
		
print revcomp