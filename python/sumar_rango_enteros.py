def run():
    header = """
    --------------------------------------------------------------
        Averigue la suma de un rango de numeros enteros.
    --------------------------------------------------------------
    """

    print(header)

    while True:
        try:
            first_number = float(input("Ingrese el primer valor del rango: "))
            first_parse_integer = int(first_number)
            if (first_number - first_parse_integer) == 0:
                break
            else:
                print(f"{first_number} no es un numero entero")
                print("INTENTELO NUEVAMENTE")
                continue
        except ValueError:
            print("ValueError: Solo puede ingresar numeros enteros y un punto decimal")

    while True:
        try:
            last_number = float(input("Ingrese el ultimo valor del rango: "))
            last_parse_integer = int(last_number)
            if (last_number - last_parse_integer) == 0:
                break
            else:
                print(f"{last_number} no es un numero entero")
                print("INTENTELO NUEVAMENTE")
                continue
        except ValueError:
            print("ValueError: Solo puede ingresar numeros enteros y un punto decimal")

    suma_del_rango = int(((last_number - first_number + 1) * (last_number + first_number))/2)

    print(f"La suma del rango es: {suma_del_rango}")


if __name__=='__main__':
    run()