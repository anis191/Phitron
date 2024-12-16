from products import Products

class Shop:
    all_products = []

    @staticmethod
    def see_all_products():
        if(len(Shop.all_products) == 0):
            print("\n-----------[There is no product avaiable!]-------------\n")
        else:
            print("\nProduct\tPrice Avaiable")
            for product in Shop.all_products:
                if product.quantity > 0:
                    print(f"{product.name}\t{product.price}\t{product.quantity}")
            # print("\n")

    @classmethod
    def publish_product(cls, name, price, quantity):
        product = Products(name=name, price=price, quantity=quantity)
        cls.all_products.append(product)
        print("\nSuccessfully product published\n")
    
    @staticmethod
    def find_product(product_name):
        for product in Shop.all_products:
            if(product.name.lower() == product_name.lower()):
                return product
        return None
    
    def place_order(self, product_name, quantity):
        product = Shop.find_product(product_name)
        if product is not None:
            if product.quantity > 0:
                if product.quantity >= quantity:
                    if product_name in self.cart:
                        self.cart[product_name] += quantity
                    else:
                        self.cart[product_name] = quantity
                    product.quantity -= quantity
                    print("\nOrder Successful!\n")
                else:
                    print(f"\nSorry! Recently \"{product.quantity}\" {product_name} is available\n")
            else:
                print(f"\n\"{product_name}\" is stock out\n")
        else:
            print(f"\n\"{product_name}\" is not found\n")
    
    @staticmethod
    def total(product, quantity):
        for items in Shop.all_products:
            if items.name.lower() == product.lower():
                return items.price * quantity
    
    def see_all_orders(self):
        if len(self.cart) == 0:
            print("\nPlease Order Anything\n")
        else:
            print(f"\nProduct\tQuantity Total")
            sum = 0
            for key,value in self.cart.items():
                total = Shop.total(product=key, quantity=value)
                sum += total
                # print(f"{key}\t{value}\t{Shop.total(product=key, quantity=value)}")
                print(f"{key}\t{value}\t{total}$")
            print(f"Your Total Bill: {sum}$")
