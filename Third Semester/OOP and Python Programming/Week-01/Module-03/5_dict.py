info = {
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

print(info, type(info))
print(info["name"], type(info["name"]))
print(info["project"]["DBMS"], type(info["project"]["DBMS"]))
print(info["cgpa"], type(info["cgpa"]))