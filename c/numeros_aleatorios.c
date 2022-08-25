#include<stdio.h>
#include<stdlib.h> // libreria con las funciones srand() y rand() para valores aleatorios
#include<stdbool.h> // libreria para declarar valores booleanos
#include<time.h> // libreria con la funcion time() para que se genere el numero aleatorio con la funcion srand()

int main() {

    srand(time(NULL));

    int numero_maximo, numero_aleatorio, mi_numero;
    bool es_el_numero = false;

    printf("Adivine el numero aleatorio\n");
    printf("Ingrese el numero maximo: ");
    scanf("%i", &numero_maximo);

    numero_aleatorio = (rand() % (numero_maximo + 1)) + 1;

    printf("Adivine el numero: ");
    scanf("%i", &mi_numero);

    do
    {
        if (mi_numero > numero_aleatorio)
        {
            printf("NO! Ingrese un numero menor: ");
            scanf("%i", &mi_numero);
        }
        else if(mi_numero < numero_aleatorio)
        {
            printf("NO! Ingrese un numero mayor: ");
            scanf("%i", &mi_numero);
        }
        else
        {
            printf("ADIVINASTE, el numero es %i\n", numero_aleatorio);
            es_el_numero = true;
        }
    } while (!es_el_numero);

    return 0;
}