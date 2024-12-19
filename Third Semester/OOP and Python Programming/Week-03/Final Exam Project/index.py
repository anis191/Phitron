from abc import ABC, abstractmethod

class Person(ABC):
    def __init__(self, name, email, address):
        self.name = name
        self.email = email
        self.address = address

class Customers(Person):
    def __init__(self, name, email, address):
        self.customer_no = len(Restaurant.all_customers) + 1
        super().__init__(name, email, address)
        self.balance = 0
        self.cart = []
    
    def view_menu(self):
        Restaurant.show_menu()

    def place_order(self, item_name, quantity):
        Restaurant.place_order(self=self, item_name=item_name, quantity=quantity)

    def check_balance(self):
        print(f"Your Current Balance is: {self.balance}")

    def view_all_orders(self):
        print(f"Your All Past Orders: ")
        i = 1
        for order in self.cart:
            for key,value in order.items():
                print(f"{i}. {key} - {value}")
            i += 1

    def add_funds(self, amount):
        self.balance += amount

class Admin(Person):
    def __init__(self, name, email, address):
        super().__init__(name, email, address)

    def add_customer(self,customer):
        Restaurant.all_customers.append(customer)

    def view_all_customers(self):
        Restaurant.customers_details()
    
    def remove_customers(self, customer_no):
        Restaurant.delete_customer_account(customer_no=customer_no)

    def view_menu(self):
        Restaurant.show_menu()

    def add_menu_item(self, item):
        Restaurant.all_menu_items.append(item)

    def remove_menu_item(self, item_name):
        Restaurant.remove_menu_item(item_name=item_name)

    def update_menu_item(self,item_name, new_name, new_price, new_quantity):
        Restaurant.update_menu_item(item_name, new_name, new_price, new_quantity)

class Restaurant:
    all_customers = []  
    all_menu_items = [] 

    @classmethod
    def add_customer(cls,customer):
        cls.all_customers.append(customer)

    @staticmethod
    def customers_details():
        print(f"Name\tEmail\tAddress")
        print(f"-----------------------")
        for customer in Restaurant.all_customers:
            print(f"{customer.name}\t{customer.email}\t{customer.address}\t{customer.customer_no}\t{customer.balance}")
        print(f"-----------------------")
    
    @classmethod
    def delete_customer_account(cls, customer_no):
        if len(cls.all_customers) == 0:
            print(f"There is no customer avaiable")
        else:
            if customer_no > cls.all_customers[-1].customer_no:
                print(f"Here last customer is: {cls.all_customers[-1].customer_no}")
            else:
                for customer in cls.all_customers:
                    if customer.customer_no == customer_no:
                        cls.all_customers.remove(customer)

    @classmethod
    def update_menu_item(cls,item_name, new_name, new_price, new_quantity):
        item = cls.Find_item(item_name=item_name)
        if item is not None:
            item.item_name = new_name
            item.price = new_price
            item.quantity = new_quantity
        else:
            print(f"\"{item_name}\" is not found")
    
    @classmethod
    def remove_menu_item(cls, item_name):
        item = cls.Find_item(item_name=item_name)
        if item is not None:
            cls.all_menu_items.remove(item)
        else:
            print(f"\"{item_name}\" is not found")
    
    @classmethod
    def show_menu(cls):
        print(f"Item\tPrice")
        print(f"*************")
        for item in cls.all_menu_items:
            print(f"{item.item_name}\t{item.price}\t{item.quantity}")
        print(f"*************")
    
    @staticmethod
    def Find_item(item_name):
        for item in Restaurant.all_menu_items:
            if item.item_name.lower() == item_name.lower():
                return item
        return None
    
    def place_order(self, item_name, quantity):
        item = Restaurant.Find_item(item_name=item_name)
        if item is not None:
            if item.quantity > 0:
                if item.quantity >= quantity:
                    total = Restaurant.total(item=item, quantity=quantity)
                    if total <= self.balance:
                        # self.cart[item.item_name] = quantity
                        self.cart.append({item_name : quantity})
                        item.quantity -= quantity
                        self.balance -= total
                        print("Order Successfull!")
                    else:
                        print(f"Your total bill: {total}$")
                        print(f"Your current balance is {self.balance}$")
                        print(f"Please fund {total - self.balance} more")
                else:
                    print(f"Sorry! Recently \"{item.quantity}\"- {item.item_name} is avaiable")
            else:
                print(f"Sorry! Recently \"{item.item_name}\" item is not avaiable")
        else:
            print(f"{item_name} is not found")

    
    @staticmethod
    def total(item, quantity):
        return item.price * quantity

class Menu:
    def __init__(self, item_name, price, quantity):
        self.item_name = item_name
        self.price = price
        self.quantity = quantity

