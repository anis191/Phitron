'''
tuple = (1,2,3,4)
tuple[0] = 99 #It's wrong. It will give an error
print(tuple)
'''
# same thing in try_except block:
tuple = (1,2,3,4)
try:
    tuple[0] = 99
    print(tuple)
except Exception as text:
    print("Here an error found: ", text)