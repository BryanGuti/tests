def main():
    print("Ordenando 3 numeros\n")

    a = int(input("Ingrese el primer numero: "))
    b = int(input("Ingrese el segundo numero: "))
    c = int(input("Ingrese el tercer numero: "))

    mayor = (((2 * a) + b + c + abs(b - c)) + abs((2 * a) - b - c - abs(b-c))) / 4
    menor = (((2 * a) + b + c - abs(b - c)) - abs((2 * a) - b - c + abs(b-c))) / 4
    medio = a + b + c - mayor - menor

    print(int(mayor))
    print(int(medio))
    print(int(menor))



if __name__ == '__main__':
    main()
