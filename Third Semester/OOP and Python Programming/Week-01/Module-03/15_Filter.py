info = [
    {"name" : "anis" , "age" : 24},
    {"name" : "muhi" , "age" : 34},
    {"name" : "arif" , "age" : 20},
    {"name" : "sabila" , "age" : 26},
    {"name" : "Nur" , "age" : 24}
]
less_24 = list(filter(lambda ans : ans["age"] < 25, info))
print(less_24)