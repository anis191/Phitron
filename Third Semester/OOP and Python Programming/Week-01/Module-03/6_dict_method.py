info = {
    "name" : "Anisul Alam",
    "id" : 2314,
    "section" : 'B',
    "course" : ["AI","CN","DC","SD"],
    "project" : {
        "SEISD" : "Online blogging platform",
        "DBMS" : "Bus management system"
    },
    "cgpa" : (3.55,2.78,4.00,3.55,3.45),
    "bool" : True,
    4 : "My GPA"
}

# Keys():
key_list = info.keys()
print(key_list)

# values():
values_list = info.values()
print(values_list)

# items():
key_value_pair_tuple_list = info.items()
print(key_value_pair_tuple_list)

# get():
print(info.get("course"))

# update():
info.update({"city" : "Ctg"})
print(info)

info["project"].update({"SD" : "Online bidding system"})
print(info)

# pop():
info.pop(4)
print(info)

info["project"].pop("DBMS")
print(info)

# copy():
new_dict = info.copy()
print(new_dict)

copy_project = info["project"].copy()
print(copy_project, type(copy_project))

# clear():
info.clear()
print(info)

# Example:
MySelf = {
    "name" : "Anisul Alam",
    "id" : 2314,
    "section" : 'B',
    "course" : ["AI","CN","DC","SD"],
    "project" : {
        "SEISD" : "Online blogging platform",
        "DBMS" : "Bus management system"
    },
    "cgpa" : (3.55,2.78,4.00,3.55,3.45)
}

for key,value in MySelf.items():
    print(key,value)