#Write functions (which are methods) like this
'''
Compute the Number of Times a Pattern Appears in a Text
Input: Two strings: A reference Text to search in, A Pattern to search for
Output: 1 integer of the count of patterns found in the text
'''
def Count(Text, Pattern):

	#Initialize variable count to zero
	count = 0

	#Write a for loop with index i in range of 0 to length of Text - length of Patter 
	# The plus 1 is to get an edge case
	for i in range( 0, len(Text) - len(Pattern) + 1 ):
		# If statement checking if the current string in the text matches the pattern
		if ( Text[i:i+len(Pattern)] == Pattern ):
			# If it matches increment count
			count = count + 1
	# Return the count
	return count

# Call your functions in the main method.
# Remember that spacing matters in if statements, looping and functions
# So every line in this main method has a tab before the code 
def main():

	#Call the function count and save the output to the variable answer
	answer =	Count( "TTGCAGTCTTGCAGTGTTTGCAGTATCATCATTGCAGTTTGCAGTGCGTCCCGTTCGCTTGCAGTTTTGGTTCGGGTTTTGCAGTCTTGCAGTCAGTTGCAGTTTGCAGTCCTTGCAGTCGCTTGCAGTTGTTGCAGTGTTGCAGTTTTGCAGTTTGCAGTTTGCAGTAAATTGCAGTTTGCAGTTTTGCAGTTTGCAGTCTACATTGCAGTGCTTTGCAGTCAGAGACTTGCAGTGTTGCAGTCGGTATTGCAGTGCCTTGCAGTTCGATTAATCCGCCTTTGCAGTGGTTAGCGTTGCAGTTTGCAGTCATTGCAGTTTGCAGTCTTTGCAGTTTTGCAGTATTCGTTGCAGTCTTGCAGTGTTTTGCAGTTGTTGCAGTATTGCAGTTTGCAGTGTTGCAGTTCCATTGCAGTTTGCAGTTCTTTGCAGTGTATTCCATTGCAGTCTTGCAGTCGTTGCAGTCTGAGCTTGCAGTACTCAATTGCAGTCCCAATTTGCAGTTTGCAGTTGGACTATTTTGCAGTTTGCAGTTTGCAGTGTTTGCAGTTTGCAGTGTTGCAGTGCCCACTGAATTGCAGTAGGTTGCAGTCCCCTTGCAGTTACCTTTAGTTGCAGTGTGTTGCAGTGATTGCAGTAACTTGCAGTTGGATCGTATTGCAGTTATTGCAGTACATCTAAGCTTGCAGTGTTGCAGTTTGCAGTTTGCAGTTTGCAGTTTCACGTTGCAGTAAAGAGCTTGCAGTAAAGGTCGGATCTTGCAGTTTGCAGTCTTGCAGTGTTCTTTGCAGTTTGCAGTTTGCAGTTTTGCAGTTTGCAGTGTTGCAGTATTGCAGTTTGCAGTATTGCAGTGGAGTTGCAGTTCCTATTGCAGTTTGCAGTCTTGCAGTTTGCAGTTTTGCAGTACGTTGCAGTTTGCAGTCTTGCAGTTTGCAGTTTGCAGTTTGCAGTGTGAGCCGGAGCCTCGGAAATTGCAGTTGTTGCAGTGTTGCAGTTCTTGCAGTGATTGCAGTGTTGCAGTGCTTGCAGTTTGCAGTTTGCAGTTTGCAGT", "TTGCAGTTT" )

	#Print out the answer to the command line
	print answer

# Main Function
# This line calls your main method once this entire python script is called
if __name__ == "__main__":
    main()