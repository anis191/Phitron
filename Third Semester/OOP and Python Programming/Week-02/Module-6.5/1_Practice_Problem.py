'''
1.Create a Product class and a Shop class.
2.Inside the Shop class, create a method name add_product which adds products using the Product class to the Shop class.
3.Inside the Shop class, create a method name buy_product which is used to buy a product and check whether this product is available or not. If you successfully buy a product, then throw a Congress message.
'''
class Product:
    def __init__(self, Name, Price):
        self.Name = Name
        self.Price = Price

class Shop(Product):
    def __init__(self):
        self.product_list = {}

    def add_product(self, Name, Price, Quantity):
        self.product_list[Name] = Quantity
        super().__init__(Name, Price)
    
    def buy_product(self,name,quantity):
        if(name in self.product_list):
            if self.product_list[name] >= quantity:
                self.product_list[name] -= quantity
                print("Bought successfully!")
            else:
                print("This product is out of stock")
        else:
            print("This product is not stored")
    
    def aviable_product(self):
        for product,quantity in self.product_list.items():
            print(f"{product} = {quantity}")      

abc = Shop()
abc.add_product('mobile', 50, 10)
abc.add_product('laptop', 100, 10)

abc.aviable_product()

abc.buy_product('mobile', 5)
abc.aviable_product()

abc.buy_product('laptop', 3)
abc.buy_product('mobile', 1)
abc.aviable_product()

abc.buy_product('fan',2)