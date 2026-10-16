def outer_func():
    print("Outer function-er bhitore asi, nam: ")
    
    # Inner function
    def inner_func():
        print("Inner function-er bhitore theke bolchi, Hello from inner function!")
    return inner_func        
    # Outer function-er bhitore inner function ke call korchi
    return inner_func

# Outer function call korchi
print(outer_func())


# Jog korar function
def add(a, b):
    return a + b

# Gun korar function
def multiply(a, b):
    return a * b

# Ei function-ti ekta function ke parameter hisebe nicche
function kora calculation function:
def calculate(func, x, y):
    result = func(x, y)
    return result

# Function pass kore call korchi
sum_result = calculate(add, 10, 5)          # add function ke parameter hisebe dilam
print(f"Addition result: {sum_result}")

mul_result = calculate(multiply, 10, 5)      # multiply function ke parameter hisebe dilam
print(f"Multiplication result: {mul_result}")