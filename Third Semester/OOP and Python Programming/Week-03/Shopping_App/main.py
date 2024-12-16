from person import Person, Customar, Seller
from shop import Shop
from products import Products

def customar_account():
    print(f"\nCreate a customer account\n")
    name = input("Enter Your Name: ")
    email = input("Enter Your Email: ")
    password = input("Enter a Password: ")
    customar = Customar(name=name, email=email, password=password)
    print(f"\nWelcome {name}")
    while(True):
        print("\n1.See All Products")
        print("2.Place Order")
        print("3.My Order")
        print("4.Exit")
        try: choice = int(input("Enter Your Choice: "))
        except: print("\n[Note: Enter input as a digit]\n")
        
        if choice == 1:
            customar.see_all_products()
        elif choice == 2:
            product_name = input("\nProduct name: ")
            quantity = int(input("Quantity: "))
            customar.place_order(product_name=product_name, quantity=quantity)
        elif choice == 3:
            customar.see_all_orders()
        elif choice == 4:
            break
        else:
            print("\nInvalid Input\n")


def seller_account():
    print(f"\nCreate a seller account\n")
    name = input("Enter Your Name: ")
    email = input("Enter Your Email: ")
    password = input("Enter a Password: ")
    seller = Seller(name=name, email=email, password=password)
    print(f"\nWelcome {name}\n")
    while(True):
        print("1.Publish a product")
        print("2.Exit")
        try: choice = int(input("Enter Your Choice: "))
        except: print("\n[Note: Enter input as a digit]\n")
        
        if choice == 1:
            name = input("\nEnter your product name: ")
            price = int(input("Enter product price: "))
            quantity = int(input("Enter quantity: "))
            seller.publish_product(name=name, price=price, quantity=quantity)
        elif choice == 2:
            break
        else:
            print("\nInvalid Input\n")


while(True):
    print("\n1.Customer")
    print("2.Seller")
    print("3.Exit")
    try: choice = int(input("Enter Your Choice: "))
    except: print("\n[Note: Enter input as a digit]\n")
    if choice == 1:
        customar_account()
    elif choice == 2:
        seller_account()
    elif choice == 3:
        break
    else:
        print("Invalid Input")