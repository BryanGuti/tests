#include<stdio.h>

int main()
{
    int posicion, primer_numero, segundo_numero;
    printf("Secuencia de Fibonacci.\n");
    printf("Que posicion de la serie desea conocer: ");
    scanf("%i", &posicion);

    primer_numero = 0;
    segundo_numero = 1;

    if(posicion == 1)
    {
        printf("El numero es: %i\n", primer_numero);
    }
    else if(posicion == 2)
    {
        printf("El numero es: %i\n", segundo_numero);
    }
    else
    {
        for (int i = 0; i < (posicion - 2); i++)
        {
            segundo_numero += primer_numero;
            primer_numero = segundo_numero - primer_numero;
        }
        printf("El numero es: %i\n", segundo_numero);
    }

    return 0;
}