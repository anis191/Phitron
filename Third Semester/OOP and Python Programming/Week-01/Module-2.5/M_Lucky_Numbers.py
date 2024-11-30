a, b = map(int, input().split()) 
lucky_numbers = []

for num in range(a,b+1):
    temp = num
    checker = True
    while(temp != 0):
        r = temp % 10
        temp = temp // 10
        if (r == 4) or (r == 7):
            continue
        else:
            checker = False
            break
    if checker is True:
        lucky_numbers.append(num)

if(len(lucky_numbers) == 0):
    print(-1)
else:
    for i in lucky_numbers:
        print(i, end=' ')