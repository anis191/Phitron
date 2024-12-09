class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    #I wish when i add(+) two object, it should be return us the sum of this two object person age
    def __add__(self, other):
        return self.age + other.age
    
    def __mul__(self, other):
        return self.age * other.age
    
    def __sub__(self, other):
        return self.age - other.age
    
    def __truediv__(self, other):
        return self.age / other.age
    
    def __eq__(self, other):
        return self.age == other.age
    
    def __gt__(self, other):
        return self.age > other.age
    
anis = Person("Anis", 23)
karim = Person("Karim", 24)
ruhi = Person("Ruhi", 20)

print(anis + karim)
print(karim + ruhi)

print(karim * ruhi)

print(karim - ruhi)

print(karim / ruhi)

print(anis == karim)

print(anis > ruhi)