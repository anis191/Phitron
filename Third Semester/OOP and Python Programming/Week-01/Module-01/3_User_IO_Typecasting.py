num1 = input("Enter a number: ")
num2 = input("Enter a number: ")
print("Sum = ",(num1+num2))

# Python input() function by default store input as a string
# So we need typecasting

num1 = int(num1)
num2 = int(num2)
print("Sum = ",(num1+num2))

# Information input:
Name = input("Enter your name: ")
Age = int(input("Enter your age: "))
Gpa = float(input("Enter your Gpa: "))

print("Name: ",Name, "Type: ",type(Name))
print("Age: ",Age, "Type: ",type(Age))
print("GPA: ",Gpa, "Type: ",type(Gpa))