#include <cs50.h>
#include <math.h>
#include <stdio.h>

int cuadrados_digitos(int number);

void main() {
    int n, count = 0;
    do
    {
        n = get_int("Ingrese un numero mayor que 0: ");
    } while (n <= 0);

    do
    {
        printf("%i\n", n);
        n = cuadrados_digitos(n);
        count++;
    } while (n != 0 && count < 100);
}

int cuadrados_digitos(int number){
    int suma = 0;
    do
    {
        suma += (int) pow((number % 10), 2);
        number = number / 10;
    } while (number > 0);

    return suma;
}