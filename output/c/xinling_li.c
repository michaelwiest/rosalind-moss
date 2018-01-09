def PatternCount(Text, Pattern):
  count=0
  i=0
  for i in range(0,1054):
      mer=Text[i:i+9]
      if mer==Pattern:
        count=count+1
      i=i+1
  return count