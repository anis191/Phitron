a = 10
# Print 1 to a(10), but skip '5':
i = 1
while(i <= a):
    if (i == 5):
        i +=1
        continue
    print(i)
    i += 1

''' Print pattern 
* 
** 
*** 
**** 
*****
'''
row = int(input("Enter row: "))
i = 1
while (i <= row):
    print(i * '*')
    i +=1
