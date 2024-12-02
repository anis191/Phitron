def names(*args):
    for name in args:
        print(f"Hi, {name}")
names("Anis","Asif","Muhi","Karim")

def info(**kwargs):
    for key,value in kwargs.items():
        print(f"{key} : {value}")

info(Name="Anis",Id = 2314, Cgpa = 3.55, City = "Ctg")