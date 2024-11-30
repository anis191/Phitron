def cube (x):
    return x*x*x

# print(cube(5))

# Map():
num = [1,2,3,4,5]
ans = list(map(cube, num))
print(ans)

# another example:
name = ["Anis","Muhi","Shariar","Karim","Nur"]
greeding = list(map(lambda value : f"Hi, {value}", name))
print(greeding)