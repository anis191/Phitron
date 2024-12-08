class Shopping:
    def __init__(self, name):
        self.name = name
        self.cart = []
    
    def add_to_cart(self, item, price, quantity):
        product = {'item':item, 'price':price, 'quantity':quantity}
        self.cart.append(product)
    
    def total_cost(self):
        self.total = 0
        for item in self.cart:
            self.total += item['price'] * item['quantity']
        print("Your total bill: $",self.total)
    
    def payment(self, amount):
        self.total_cost()
        if(amount >= self.total):
            self.total -= amount
            print(f"Thank you. You pay {amount}$")
        else:
            print(f"Please provide {self.total - amount}$ more")

cus1 = Shopping("Anisul alam")
cus1.add_to_cart('apple',2,2)
cus1.add_to_cart('banana',1,3)
cus1.add_to_cart('orange',3,5)
# cus1.total_cost()
cus1.payment(22)