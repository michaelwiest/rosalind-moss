def Text(starting, text, length):
    total = starting + length
    return text[starting:total];


def PatternCount(txt,pttrn):
    count = 0
    difference = len(txt) - len(pttrn) + 1
    for i in range(difference):
        if Text(i,txt,len(pttrn)) == pttrn:
            count = count +1
    return count;