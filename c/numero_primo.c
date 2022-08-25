#include<stdio.h>

int main()
{
    int mi_numero;

    printf("Averigue si su numero es primo\n");
    printf("Ingrese un numero mayor que 1: ");
    scanf("%i", &mi_numero);

    for (int i = 1; i <= mi_numero; i++)
    {
        if (((mi_numero % i) == 0) && (mi_numero == i))
        {
            printf("ES PRIMO!\n");
        }
        else if(((mi_numero % i) == 0) && (i == 1))
        {
            continue;
        }
        else if((mi_numero % i) > 0)
        {
            continue;
        }
        else
        {
            printf("NO ES PRIMO!\n");
            break;
        }
    }

    return 0;
}