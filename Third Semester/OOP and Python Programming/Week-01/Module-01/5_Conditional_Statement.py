# if/elif/else:
num = int(input("Enter a number: "))
if (num % 2 == 0):
    print("It's a even number")
else:
    print("It's a odd number")

#elif:
age = int(input("Enter your age: "))
if (age < 18):
    print("Child")
elif (age >= 18 and age <= 25):
    print("Boy")
elif (age >= 26 and age <= 60):
    print("Man")
else:
    print("Old")

# is, is not:
a = True
b = False

if a is True:
    print("A is true")
else:
    print("B is false")

if b is True:
    print("B is true")
else:
    print("B is false")

if a is not True:
    print("A is false")
else:
    print("A is true")