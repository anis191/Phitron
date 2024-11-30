n = int(input())
a = list(map(int, input().split()))
max_number = max(a)
min_number = min(a)

max_position=0
min_position=0
i = 0
for num in a:
    mx_ck = False
    mn_ck = False
    if num == max_number:
        max_position = i
        mx_ck = True
    if num == min_number:
        min_position = i
        mn_ck = True
    i += 1
    if(mx_ck is True) and (mn_ck is True):
        break
a[max_position] = min_number
a[min_position] = max_number
for i in a:
    print(i, end=' ')