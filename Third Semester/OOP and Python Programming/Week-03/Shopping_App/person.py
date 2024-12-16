from shop import Shop

class Person:
    def __init__(self, name, email, password):
        self.name = name
        self.email = email
        self.password = password

class Customar(Person):
    def __init__(self, name, email, password):
        super().__init__(name, email, password)
        self.cart = {}  #All orderd products{"Mobile":2, "Laptop":1}

    def see_all_products(self):
        Shop.see_all_products()
    
    def place_order(self, product_name, quantity):
        Shop.place_order(self=self, product_name=product_name, quantity=quantity)

    def see_all_orders(self):
        Shop.see_all_orders(self=self)

class Seller(Person):
    def __init__(self, name, email, password):
        super().__init__(name, email, password)

    def publish_product(self, name, price, quantity):
        Shop.publish_product(name=name, price=price,quantity=quantity)
