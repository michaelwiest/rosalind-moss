def PatternCount(text, pattern):
    """
    Counts number of occurences of pattern in text. Takes into account
    overlapping instances of pattern.

    Uses sliding window of length len(pattern).

    Input: PatternCount(CABABAC, ABA)
    Output: 2
    """
    count = 0
    for i in xrange(0, len(text) - len(pattern) + 1):
        if text[i:i + len(pattern)] == pattern:
            count = count + 1
    return count