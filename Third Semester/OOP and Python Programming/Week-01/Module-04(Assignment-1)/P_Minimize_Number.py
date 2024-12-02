n = int(input())
a = list(map(int, input().split()))
total = 0
while(True):
    check = list(map(lambda num : num % 2 == 0, a))
    if False in check:
        break
    else:
        total += 1
        a = list(map(lambda num : num // 2, a))
print(total)