import numpy as np
from numpy import array, dot, random

class Counter:

	def __init__(self, pattern, text):
		self.text = text
		self.pattern = pattern
		self.k = len(pattern)

	def count(self):
		k = self.k
		pattern = self.pattern
		text = self.text

		result = 0

		for i in range (0, (len(text)-k+1)):
			found = self.match(text[i:(i+k)], pattern)
			if found == 1:
				result=result+1
		return result

	def match (self, text, pattern):
		index = 0

		while(index<len(pattern)):
			if text[index] == pattern[index]:
				if index == (len(pattern)-1):
					return 1
				index=index+1
			else: 
				return 0

f = open("../Downloads/rosalind.txt", 'r')
x = f.read()
text,pattern,blank = x.split('\n')

c = Counter(pattern, text)
result = c.count()
print(result)