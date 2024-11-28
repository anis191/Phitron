'''
In "1_function.py" file, we create a simple calculator. Now we take input here, and call this calculator function from "1_function.py". We do this using "from-import" module.
'''
from A_function import calculator
n1 = int(input("Enter a number: "))
n2 = int(input("Enter another number: "))
op = input("Enter operation sign: ")
ans = calculator(n1,n2,op)

if ans is False:
    print("Invalid operation sign")
else:
    print(ans)
'''
কোডটি একটি নির্দিষ্ট ফাংশন calculator ব্যবহার করে একটি গণনা সম্পাদন করে। যেহেতু ফাংশনটি একটি আলাদা মডিউল A_function-এ সংরক্ষিত
'''