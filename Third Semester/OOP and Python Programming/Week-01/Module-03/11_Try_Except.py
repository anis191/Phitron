#try: except: --> When we think any error may occur in the output of the code.
#The (try:) block lets you test a block of code for errors.
#The (except:) block lets you handle the error.
'''
num = 10
char = 'a'
print(num + char)
--> we know this wrong in python.It show error in output
'''

num = 10
char = 'a'

try:
    print(num + char)
except:
    print("Here a wrong concat")

try:
    print(num + 5)
except:
    print("Here a wrong concat")

# We also show/print this specific error message.Using (Exception as e),then print (e) also

try:
    a = 10 + "robi"
    print(a)
except Exception as e:
    print("Oops! Here an error -->", e) 