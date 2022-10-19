a = abs(int(input("input first number: ")))
b = abs(int(input("input second number: ")))

if a == 0 or b == 0:
    print(a + b)
else:
    while a != 0 and b != 0:
        if a > b and a % b != 0:
            a = a % b

        elif b > a and b % a != 0:
            b = b % a

        else:
            print(min(a, b))
            break


