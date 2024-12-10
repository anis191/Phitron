# Find out which of these players is older using the operator overloading.

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
    
    @classmethod
    def All_Players(cls):
        print(cls.list)
    
    def __gt__(self, other):
        if self.age > other.age:
            return self

    @classmethod
    def Older_Player(cls):
        older = cls.list[0] #First player
        for item in cls.list:
            if(item > older):
                older = item
            else:
                continue
        print(older.name, older.age)

sakib = Cricketer('Sakib', 38, 68, 91)
musfiq = Cricketer('Rahim', 36, 68, 88)
kamal = Cricketer('Kamal', 39, 68, 94)
jack = Cricketer('Jack', 38, 68, 91)
kalam = Cricketer('Kalam', 37, 68, 95)

Cricketer.Older_Player()