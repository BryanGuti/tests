from math import floor

def main():

    print("Averigue la parte entera de un numero que tiene la mayor parte decimal.\n")
    a = float(input("Ingrese el primer numero: "))
    b = float(input("Ingrese el segundo numero: "))
    decimal_a = round((a - floor(a)), 3)
    decimal_b = round((b - floor(b)), 3)
    if decimal_a > decimal_b:
        print(int(a))
    elif decimal_b > decimal_a:
        print(int(b))
    else:
        print("Las partes decimales de ambos numeros son iguales.\n")





if __name__ == '__main__':
    main()