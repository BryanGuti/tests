#include<stdio.h>

int main()
{
    int filas, columnas;

    printf("Trabajando con matrices\n");
    printf("Ingrese el numero de filas: ");
    scanf("%i", &filas);
    printf("Ingrese el numero de columnas: ");
    scanf("%i", &columnas);

    int matriz[filas][columnas];

    for (int i = 0; i < filas; i++)
    {
        printf("FILA %i\n", (i + 1));
        for (int j = 0; j < columnas; j++)
        {
            printf("\n\tIngrese el elemento %i: ", (j + 1));
            scanf("%i", &matriz[i][j]);
        }
    }

    printf("\nEsta es tu matriz!!\n");

    for (int i = 0; i < filas; i++)
    {
        printf("\n");
        for (int j = 0; j < columnas; j++)
        {
            printf("\t%i", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}