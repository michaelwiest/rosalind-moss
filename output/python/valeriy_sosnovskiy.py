#!usr/bin/python
#Valeriy Sosnovskiy CSE 181 
import sys

#counts the number of times pattern occurs in text without overlap 
#@param: text, the text 
#@param: pattern, the pattern that we are looking for in the text
#@return: count, count of the number of times the pattern occurred 
def pattern_count(text, pattern):
	count = 0 	# the number of occurances of the pattern in text

	text_length = len(text) 		#the length of the text
	pattern_length = len(pattern) 	#the lenght of the pattern

	start_index = 0					#the starting point index in text
	end_index = pattern_length	 	#the ending point index in text

	#check for null 
	if text == None or pattern == None:
		return count 

	#if pattern is greater than text return 0
	if text_length < pattern_length:
		return count 

	#if patter is equal to text, compare for equality
	elif text_length == pattern_length:

		if text[start_index:end_index] == pattern:
			count = 1 

	#if text is greater than pattern
	else:
		while start_index <= (text_length - pattern_length):
			
			#print "compare: ", text[start_index:end_index], " with ", pattern
			if text[start_index:end_index] == pattern:
				count += 1 

			start_index += 1
			end_index += 1

	return count 

def main():

	file_path = sys.argv[1]	#the file path 
	pattern = None			#the patten we are going to be looking for 
	text  	= None			#the text we are analyzing for pattern 

	given_strings = None   #input from the dataset

	#open the file and get the text 
	with open(file_path) as opened_file:
		given_strings = opened_file.read()

	opened_file.close()

	input_list = given_strings.split('\n')
	
	pattern = input_list[1]
	text = input_list[0]

	count_of_pattern = pattern_count(text,pattern)
	print count_of_pattern
	
if __name__ == '__main__':
	main()