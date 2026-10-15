class Product: 
    def __init__(self, name, price, quantity):
        self.name = name
        self.price = price
        self.quantity = quantity
    
    def show(self):
        print(f"Product Name: {self.name}, Price: {self.price}, Quantity: {self.quantity}")
        
class Shop:
    def __init__(self):
        self.products = []
        
    def add_product(self, product):
        self.products.append(product)
        
    def buy_product(self, product_name, quantity):
        found = False
        for product in self.products:
            if product.name == product_name:
                found = True
                if product.quantity >= quantity:
                    product.quantity -= quantity
                    print(f"Congratulations! You bought {quantity} {product_name}(s).")
                else:
                    print(f"Insufficient quantity of {product_name}. Available: {product.quantity}")
                break
        if not found:
            print(f"Product {product_name} not found in the shop.")

class Vehicle:
    def __init__(self, name):
        self.name = name

    def move(self):
        print(self.name, "is moving")

class Car(Vehicle):
    def __init__(self, name, seats):
        super().__init__(name)
        self.seats = seats

    def honk(self):
        print(self.name, "is honking")



class BankAccount:
    def __init__(self, owner, balance):
        self.owner = owner          # public
        self._branch = "Dhaka"      # protected
        self.__balance = balance    # private

    def deposit(self, amount):
        if amount > 0:
            self.__balance += amount
            print("Deposited:", amount)
        else:
            print("Invalid amount")

    def withdraw(self, amount):
        if 0 < amount <= self.__balance:
            self.__balance -= amount
            print("Withdrawn:", amount)
        else:
            print("Insufficient balance")

    def get_balance(self):
        return self.__balance


# shop = Shop()
# shop.add_product(Product("Book", 120, 2))
# shop.add_product(Product("Pen", 10, 5))

# shop.buy_product("Pen", 3)     # দাম + Congrats
# shop.buy_product("Pen", 3)     # শুধু Insufficient (দাম নেই)
# shop.buy_product("Bag", 1)     # not found


# c = Car("Toyota", 4)
# c.move()
# c.honk()
# print("Seats:", c.seats)

acc = BankAccount("Rahim", 1000)

print(acc.owner)            # public: সরাসরি পাওয়া যায়
print(acc._branch)          # protected: পাওয়া যায়, কিন্তু করা উচিত না

acc.deposit(500)
acc.withdraw(200)
print("Balance:", acc.get_balance())

acc.withdraw(5000)          # নিয়ম আটকে দিল

# print(acc.__balance)      # AttributeError