import math

def get_delta(a: float, b: float, c: float) -> float:
    return (b**2) - (4 * a * c)

def root(a: float, b: float, c: float) -> None : 
    delta = get_delta(a, b, c)

    if delta > 0:
        r1 = (-b + math.sqrt(delta) ) / (2 * a)
        r2 = (-b - math.sqrt(delta) ) / (2 * a)
        print(f"r1 = {r1}")
        print(f"r2 = {r2}")
    elif delta == 0:
        r = -b / (2 * a)
        print(f"r1 = r2 = {r}")
    else :
        real = -b / (2 * a)
        imaginary = math.sqrt(-delta) / (2 * a)
        print(f"r1 = {real} + {imaginary}i")
        print(f"r2 = {real} - {imaginary}i")

print("Please enter a, b, and c consecutively -> ax^2 + bx + c = 0 (a b c):")

while True :
    try :
        a = float(input("Enter a: "))
        b = float(input("Enter b: "))
        c = float(input("Enter c: "))
        break
    except :
        print("Please enter a valid value (Integer or decimal) ! ")

root(a, b, c)
