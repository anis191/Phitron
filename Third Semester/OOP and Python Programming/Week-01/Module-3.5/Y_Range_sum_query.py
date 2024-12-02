nq = tuple(map(int, input().split()))
a = list(map(int, input().split()))
pre = []
pre.append(a[0])
for i in range(1,nq[0]):
    pre.append(a[i] + pre[i-1])

for query in range(0, nq[1]):
    lr = list(map(int, input().split()))
    lr[0] -= 1
    lr[1] -= 1
    sum = 0
    if(lr[0] == 0):
        sum = pre[lr[1]]
    else:
        sum = pre[lr[1]] - pre[lr[0]-1]
    print(sum)