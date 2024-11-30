# add():
info = {"Anis",2314}

city = "Ctg"
num = [1,2,3]
gpa = (3.93,2.55)

info.add(city)
print(info)

# info.add(num) -->list can't add
info.add(gpa)
print(info)

# remove():
info.remove(2314)
print(info)

# pop():
info.pop()
print(info)

# union():
s1 = {1,2,3,4,5}
s2 = {2,4,6,8,10}
union_set = s1.union(s2)
print(union_set)

# intersection():
inter_set = s1.intersection(s2)
print(inter_set)