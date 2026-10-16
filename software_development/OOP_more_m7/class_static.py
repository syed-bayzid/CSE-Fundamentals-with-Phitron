class Car():
    cart = []
    origin  = "Germany"

    def __init__(self, name, seats):
        super().__init__(name)
        self.seats = seats
    @classmethod
    def purchase(self, item, price , quantity):
        self.cart.append(item)
        remaining_balance = quantity - price
        print(f"{item} has been added to your cart. Total price: ${price * quantity} for {quantity} units. Remaining balance: ${remaining_balance}")

    @staticmethod
    def multiply(a, b):
        print(a * b)

# class instance
pickup = Car("Pickup", 4)
# class method call
Car.purchase("Pickup", 20000, 2)
# static method call
Car.multiply(5, 3) 