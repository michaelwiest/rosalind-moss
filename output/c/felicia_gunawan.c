"""
Felicia Gunawan
fgunawan@ucsd.edu
BENG 181 Winter 2016
Homework 1-1
"""

# calculates the number of occurences of pattern in text
def Count(text,pattern):

	# initialize count
	count = 0

	# check the pattern by sliding a window in text 
	#	with a size of the pattern's length
	for index in range (0,(len(text)-len(pattern))):
		if text[index:(index+len(pattern))] == pattern :
			# increase count if matches found from the current index
			count = count+1

	return count

def main():
	import sys
	# store the input as string variables
	# the first line in the file will be the text/sequence
	# the second line in the file will be the pattern to be seek in the text
	i_text=sys.stdin.readline()
	i_text=i_text.rstrip('\n')
	i_pattern=sys.stdin.readline()
	i_pattern=i_pattern.rstrip('\n')

	# print the result from calling count function 
	print(Count(i_text,i_pattern))

if __name__ == '__main__':
	main()