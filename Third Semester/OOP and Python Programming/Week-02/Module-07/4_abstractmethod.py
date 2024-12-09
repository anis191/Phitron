from abc import ABC, abstractmethod

class Persion:
    def __init__(self, name, age):
        self.name = name
        self.age = age
    
    @abstractmethod
    def dress(self):
        pass
    
class Male(Persion):
    def __init__(self, name, age):
        super().__init__(name, age)

    def exercise(self):
        print("5 hour")
    
    '''def dress(self):
        print("Shirt and t-shirt")'''

class Female(Persion):
    def __init__(self, name, age):
        super().__init__(name, age)

    def exercise(self):
        print("2 hour")
    
    '''def dress(self):
        print("Ladies style dress")'''

tonni = Female("Tonni", 22)
tonni.exercise()
# tonni.dress()

muhi = Male("Muhi", 24)
muhi.exercise()
# muhi.dress()