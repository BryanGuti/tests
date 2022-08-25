# Averiguar la tasa de variacion (%) de los ingresos. Ingresando (input) dos valores (x,y), ambos reales (R).


def run():

    message = """
    -------------------------------------------------------------------
        Averigue la tasa de variación de sus ingresos actuales
        respecto a un valor anterior cualquiera.
    -------------------------------------------------------------------
        AVISO: Solo puede usar los signos (+,- y .) y los digitos
        ---------------------------------------------------------
    """

    print(message)

    while True:
        try:
            last_income = float(input("Ingresa el valor de tus ingresos anteriores: "))
            current_income = float(input("Ingresa el valor de tus ingresos actuales: "))

            percentage = (float(current_income/last_income) - 1) * 100
            percentage = round(percentage, 2)

            print(f"La tasa (%) es: {percentage}%")

            break
        except ValueError:
            print("ValueError: Solo puede ingresar numeros enteros y un punto decimal")
            break


if __name__=='__main__':
    run()