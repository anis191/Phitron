s = input()
count_L = 0
count_R = 0
positions = []

total = 0
for pos, ch in enumerate(s):
    if (ch == 'L'):
        count_L += 1
    else:
        count_R += 1

    if(count_L == count_R):
        total += 1
        positions.append(pos)
        
print(total)
if len(positions) == 1:
    print(s[:positions[0]+1])
else:
    print(s[:positions[0]+1])
    for i in range(1, len(positions)):
        print(s[positions[i-1]+1 : positions[i]+1])
