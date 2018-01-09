def main():
  lines = open("data/rosalind_ba1a.txt").read().splitlines()

  text = lines[0]
  pattern = lines[1]

  fout = open("out.txt", "w")
  fout.write(str(pattern_count(text,pattern)))
  fout.close() 

def pattern_count(text, pattern):
  count = 0
  for i in range(len(text)-len(pattern)):
    if text[i:i+len(pattern)] == pattern:
      count = count + 1
  return count  

if __name__ == '__main__':
  main()