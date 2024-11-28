num = [1, 2, 3, 2, 4, 5, 6, 7, 8, 9, 10, 10, 6, 3, 7, 8, 1, 5, 4, 9, 2, 6]
print("Number List: ",num)

n = int(input("Enter which number you should delete: "))
for x in num[:]:
    if x == n:
        num.remove(x)

print("Ans: ",num)