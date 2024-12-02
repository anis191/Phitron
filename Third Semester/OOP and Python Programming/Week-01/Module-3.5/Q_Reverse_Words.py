s = list(map(str, input().split()))
for word in s:
    print(word[::-1], end=' ')

'''
=> word[::-1] Explain:

-->This uses Python's slicing syntax: s[start:end:step].

-->The slicing components:
    1.start: The starting index (defaults to the beginning if omitted).
    2.end: The ending index (defaults to the end if omitted).
    3.step: The step or stride, determining how to move through the string (default is 1, meaning forward by one character).

-->In word[::-1]:
    1.start and end are omitted, meaning it considers the entire string.
    2.The step is -1, which means the string is traversed "backward", from the last character to the first.
'''