tuple = ("Anis",2314,False,2.66)
print(tuple, type(tuple))

print(tuple[0])
print(tuple[1])
print(tuple[2])
print(tuple[3])

# Null/empty tuple:
a = ()
print(a, type(a))

# 1 value tuple:
b = (34,)
print(b, type(b))

info = ("Anis",2314,[1,2,3,4],('a','b','c'))
print(info)
for item in info:
    print(item, type(item))

# info[0]='Karim' --> It's wrong
info[2][0] = 99
print(info)