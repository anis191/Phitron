n = int(input())
a = list(map(int, input().split()))
s = set(a)
total = 0

for num in s:
    t = a.count(num)
    if(num == t):
        continue
    else:
        if num < t:
            total += t-num
        else:
            total += t
print(total)