def PatternCount2(Text, Pattern):

    count = 0
    test = True 
    index = 0
    position = 0
    while (test == True):
        if Text.find(Pattern,index) == -1:
            test = False 
        else:
            lastposition = Text.find(Pattern,index)
            
            if lastposition != 0:
                if position != lastposition:
                    position = lastposition
                    count += 1
                    #print(index)
            else:    
                count += 1
                #print("onyl once")
            index += 1 
    print(count)
    return