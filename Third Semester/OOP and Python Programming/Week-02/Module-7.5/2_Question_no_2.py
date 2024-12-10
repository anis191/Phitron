# Change any players "weight" using "Getter and Setter"

class Person:
    def __init__(self, name, age, height, weight) -> None:
        self.name = name
        self.age = age
        self.height = height
        self.weight = weight

class Cricketer(Person):
    list = []
    def __init__(self, name, age, height, weight) -> None:
        Cricketer.list.append(self)
        super().__init__(name, age, height, weight)
    
    @property   #Getter
    def Weight(self):
        return self.weight
    
    @Weight.setter  #Setter
    def Weight(self, value):
        if(value > 110):
            print("As a cricketer it's too much weight")
        else:
            self.weight = value

sakib = Cricketer('Sakib', 38, 68, 91)
musfiq = Cricketer('Rahim', 36, 68, 88)
kamal = Cricketer('Kamal', 39, 68, 94)
jack = Cricketer('Jack', 38, 68, 91)
kalam = Cricketer('Kalam', 37, 68, 95)

print(jack.Weight)
jack.Weight = 115
print(jack.Weight)