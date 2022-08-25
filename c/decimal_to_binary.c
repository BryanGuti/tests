#include <stdio.h>
#include <cs50.h>

long long decimal_to_binary(int number){
    long long binary_number = 0;
    long long order_of_magnitude = 1;
    while (number > 0)
    {
        binary_number += (number % 2) * order_of_magnitude;
        number /= 2;
        order_of_magnitude *= 10;
    }
    return binary_number;
}

int main(){
    int decimal_number;

    do
    {
        decimal_number = get_int("Ingrese el numero que desea convertir a binario: ");
    } while (decimal_number < 0);

    printf("El numero en binario es: %lld\n", decimal_to_binary(decimal_number));

    return 0;
}