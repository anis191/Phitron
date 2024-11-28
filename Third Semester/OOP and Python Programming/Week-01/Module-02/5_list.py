numbers = [1,2,3,4,5]
print("Numbers: ",numbers, type(numbers))

# orderd:
print(numbers[0])
print(numbers[3])

info = ["Anisul Alam",2314,3.78,True,numbers]
print(info, type(info))

info[1] = 2222
info[3] = False
print(info)

print(info[3], type(info[3]))

# Empty list:
a = []
print(a, type(a))

# list another syntax:
bio = list(('Anis', 12, False, 3.99))
print(bio, type(bio))