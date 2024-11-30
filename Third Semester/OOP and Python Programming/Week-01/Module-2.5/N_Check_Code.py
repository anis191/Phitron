a, b = map(int, input().split())
s = input()

no = False
if len(s) != a + b + 1:
    no = True
    print("No")

elif s[a] != '-':
    no = True
    print("No")

else:
    for i in range(len(s)):
        if i == a:
            continue
        if not s[i].isdigit():
            no = True
            print("No")
            break
if not no:
    print("Yes")
