class Animal:
    def speak(self):
        print("Make a sound")
    
    def eat(self):
        print("Eat meat")

class Dog(Animal):
    def speak(self):    #This method are overriding
        print("Dog barks")

class Tiger(Animal):
    pass

animal = Animal()
dog = Dog()
tiger = Tiger()

animal.speak()
dog.speak()     #This method are overriding
tiger.speak()

animal.eat()
dog.eat()
tiger.eat()