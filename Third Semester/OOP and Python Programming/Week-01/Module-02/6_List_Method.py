# append():
info = ["Anis",2314]
info.append('B')
print(info)
info.append(3.55)
print(info)

# insert():
info2 = ["Arif",23,4.00,False]
print(info2)
info2.insert(2,'C')
print(info2)

# index():
num = list((1,2,9,1,2,3,4,5))
ans = num.index(2)
print(ans)

# count():
num = list((1,2,9,1,2,3,4,5))
ans = num.count(2)
print(ans)

# copy():
old_list = [1,2,False,2.3]
print(old_list)
new_list = old_list.copy()
print(new_list)

# sort():
num = list((1,2,9,1,2,3,4,5))
print(num)
num.sort()
print(num)
num.sort(reverse=True)
print(num)

# reverse():
info2 = ["Arif",23,4.00,False]
print(info2)
info2.reverse()
print(info2)
num5 = [1,2,9,9,1,2,1,4,5]
num5.remove(9)
print("It:", num5)

# remove():
info2 = ["Arif",23,4.00,False]
print(info2)
info2.remove(4.00)
print(info2)
info2.remove("Arif")
print(info2)

# clear():
info = list(("Abcd",21, 2.33, False))
print(info)
info.clear()
print(info)

# pop():
info = ["anis",232,2.45,False,'c']
print(info)
info.pop(2)
print(info)
info.pop(len(info)-1)
print(info)