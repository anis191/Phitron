from abc import ABC, abstractmethod

class Person(ABC):
    def __init__(self, name, email, address):
        self.name = name
        self.email = email
        self.address = address

class Customers(Person):
    def __init__(self, name, email, address):
        self.customer_id = len(Restaurant.all_customers) + 1
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
    
    def remove_customers(self, customer_id):
        Restaurant.delete_customer_account(customer_id=customer_id)

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
        print(f"Customer Id\tName\tEmail\tAddress")
        print(f"--------------------------------------")
        for customer in Restaurant.all_customers:
            print(f"{customer.customer_id}\t{customer.name}\t{customer.email}\t{customer.address}")
        print(f"--------------------------------------")
    
    @classmethod
    def delete_customer_account(cls, customer_id):
        if len(cls.all_customers) == 0:
            print(f"There is no customer avaiable")
        else:
            if customer_id > cls.all_customers[-1].customer_id:
                print(f"Here last customer is: {cls.all_customers[-1].customer_id}")
            else:
                for customer in cls.all_customers:
                    if customer.customer_id == customer_id:
                        cls.all_customers.remove(customer)
                        print(f"Customer Id - {customer.customer_id} successfully removed")

    @classmethod
    def update_menu_item(cls,item_name, new_name, new_price, new_quantity):
        item = cls.Find_item(item_name=item_name)
        if item is not None:
            item.item_name = new_name
            item.price = new_price
            item.quantity = new_quantity
            print(f"\nItem update Successfully")
        else:
            print(f"\"{item_name}\" is not found")
    
    @classmethod
    def remove_menu_item(cls, item_name):
        item = cls.Find_item(item_name=item_name)
        if item is not None:
            cls.all_menu_items.remove(item)
            print(f"\n{item_name} remove Successfully")
        else:
            print(f"\"{item_name}\" is not found")
    
    @classmethod
    def show_menu(cls):
        print(f"Item\tPrice\tAvaiable")
        print(f"************************")
        for item in cls.all_menu_items:
            print(f"{item.item_name}\t{item.price}\t{item.quantity}")
        print(f"*************************")
    
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

def customer_interface():
    print("\n Create a customer account--> \n")
    name = input("Enter Your Name: ")
    email = input("Enter Your Email: ")
    address = input("Enter Your Address: ")
    customer = Customers(name=name, email=email, address=address)
    Restaurant.all_customers.append(customer)
    print(f"\nWelcome {name}")
    while(True):
        pass

def admin_interface():
    print("\nCreate admin account-->")
    name = input("Enter Your Name: ")
    email = input("Enter Your Email: ")
    address = input("Enter Your Address: ")
    admin = Admin(name=name, email=email, address=address)
    print(f"\nWelcome admin {name}")
    while(True):
        print("\n1. Add a customer")
        print("2. View all customers details")
        print("3. Remove a customer")
        print("4. View menu")
        print("5. Add menu item")
        print("6. Remove menu item")
        print("7. Update menu item")
        print("8. Exit")
        try:
            choice = int(input("Enter Your Choice: "))
            if choice == 1:
                Name = input("\nEnter customer name: ")
                Email = input("Enter customer email: ")
                Address = input("Enter customer Address: ")
                customer = Customers(name=Name, email=Email, address=Address)
                admin.add_customer(customer=customer)
                print("\nCustomer Added Successfully")
            elif choice == 2:
                admin.view_all_customers()
            elif choice == 3:
                try:
                    customer_id = int(input("Enter customer id: "))
                    admin.remove_customers(customer_id=customer_id)
                except:
                    print("For delete a customer, need customer id")
            elif choice == 4:
                admin.view_menu()
            elif choice == 5:
                item_name = input("Enter item name: ")
                price = int(input("Enter item price"))
                quantity = int(input("Enter initial quantity: "))
                item = Menu(item_name=item_name, price=price, quantity=quantity)
                admin.add_menu_item(item=item)
                print("\nItems Added Successfully")
            elif choice == 6:
                item_Name = input("Enter item name: ")
                admin.remove_menu_item(item_name=item_Name)
            elif choice == 7:
                Item_name = input("Enter item name(old): ")
                new_name = input("Enter item name(new): ")
                new_price = int(input("Enter item new price: "))
                add_quantity = int(input("Add/update item quantity: "))
                admin.update_menu_item(item_name=Item_name, new_name=new_name, new_price=new_price, new_quantity=add_quantity)
            elif choice == 8:
                break
            else:
                print("\nInvalid Input")
        except:
            print("\nWrong Input:[Enter your choice as a number(1/2/3....)]")


while(True):
    print("\n1.Customer")
    print("2.Admin")
    print("3.Exit")
    try:
        choice = int(input("Enter Your Choice: "))
        if choice == 1:
            customer_interface()
        elif choice == 2:
            admin_interface()
        elif choice == 3:
            print("\nThank's For Visit")
            break
        else:
            print("\nInvalid Input")
    except:
        print("\nWrong Input:[Enter your choice as a number(1/2/3)]")




#Code Test
'''
admin = Admin('anis','@','dsxd')
customer = Customers('arif','arif@@','daka')
admin.add_customer(customer=customer)
customer = Customers('asif','asif@@','ctg')
admin.add_customer(customer=customer)
# admin.remove_customers(1)
# admin.view_all_customers()

item = Menu('pizza', 5, 10)
admin.add_menu_item(item=item)
item = Menu('bargur', 5, 10)
admin.add_menu_item(item=item)

admin.view_all_customers()
admin.view_menu()'''