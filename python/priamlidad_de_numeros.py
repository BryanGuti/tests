def run():
    header = """
    -----------------------------------------------
        Descubra si su edad es un numero primo.
    -----------------------------------------------
    """

    print(header)

    while True:
        try:
            edad = float(input("Ingrese su edad: "))
            integer_edad = int(edad)
            if ((edad - integer_edad) != 0) or (edad < 1):
                print("ValueError: Solo puede ingresar numeros enteros positivos.")
            else:
                break
        except ValueError:
            print("ValueError: Solo puede ingresar numeros enteros positivos.")

    if (edad == 1):
        print("Su edad NO ES un numero PRIMO.")
    else:
        for i in range(2, (int(edad) + 1)):
            if (edad % i) == 0 and (edad == i):
                print("Su edad ES un numero PRIMO")
            elif (edad % i) == 0:
                print("Su edad NO ES un numero PRIMO")
                break
            else:
                continue


if __name__=='__main__':
    run()