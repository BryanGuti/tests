#include <stdio.h>
#include <math.h>

void main(void)
{
    int a, b, c, mayor, menor, medio;

    printf("Ingrese el primer numero: ");
    scanf("%d", &a);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);
    printf("Ingrese el tercer numero: ");
    scanf("%d", &c);

    mayor = ((2*c)+a+b+fabs(a-b)+fabs((2*c)-a-b-fabs(a-b)))/4;
    menor = ((2*c)+a+b-fabs(a-b)-fabs((2*c)-a-b+fabs(a-b)))/4;
    medio = a+b+c-mayor-menor;

    printf("\n\t%d\n", mayor);
    printf("\n\t%d\n", medio);
    printf("\n\t%d\n", menor);

    return;
}
