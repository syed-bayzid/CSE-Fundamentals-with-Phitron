class Car():
    cart = []
    origin = "Germany"

    def __init__(self, name, seats):
        self._name = name
        self._seats = seats  # Protected attribute

    # Getter for seats
    @property
    def seats(self):
        return self._seats

    # Setter for seats with validation
    @seats.setter
    def seats(self, value):
        if value <= 0:
            print("Error: Seats must be greater than 0!")
        else:
            self._seats = value
            print(f"Seats updated successfully to: {self._seats}")

    @classmethod
    def purchase(cls, item, price, quantity):
        cls.cart.append(item)
        print(f"{item} has been added to your cart. Total price: ${price * quantity}")

    @staticmethod
    def multiply(a, b):
        print(a * b)

# Class instance
pickup = Car("Pickup", 4)

# Accessing value using Getter
print(f"Initial seats: {pickup.seats}")[cite: 1]

# Changing value using Setter
pickup.seats = 6  # Eta setter ke trigger korbe

# Trying invalid value
pickup.seats = -2 # Validation message dekhabe