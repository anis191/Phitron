class Bank:
    min_withdraw = 100
    max_withdraw = 50000
    def __init__(self, Name, Balance):
        self.Name = Name
        self.Balance = Balance
        self.welcome()
    
    def welcome(self):
        print(f"Welcome {self.Name}")
    
    def deposit(self, amount):
        self.Balance += amount
        print(f"{amount} tk successfully deposit")
    
    def withdraw(self, amount):
        if(amount < self.Balance) and (amount >= self.min_withdraw) and (amount <= self.max_withdraw):
            self.Balance -= amount
            print(f"{amount} tk successfully withdraw")
        else:
            print("Minimum withdraw amount: 100")
            print("Maximum withdraw amount: 50000")
            self.current_balance()
    
    def current_balance(self):
        print("Your current balance: ",self.Balance)

acc1 = Bank("Anisul Alam", 25000)
acc1.deposit(5000)
acc1.current_balance()
acc1.withdraw(2000)
acc1.current_balance()
acc1.withdraw(100)
acc1.current_balance()
acc1.withdraw(100000)