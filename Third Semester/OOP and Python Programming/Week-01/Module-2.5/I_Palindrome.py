n = int(input())
temp = n
sum = 0
while(temp != 0):
    r = temp % 10
    sum = (sum * 10) + r
    temp = temp // 10
if n == sum:
    print(sum)
    print("YES")
else:
    print(sum)
    print("NO")