#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {

    int array_size = get_int("Type the array size: ");
    int min_value = get_int("Set the minimum value: ");
    int max_value = get_int("Set the maximum value: ");

    srand(time(NULL));

    int A[array_size];
    for (int i = 0; i < array_size; i++)
    {
        A[i] = min_value + (rand() % (max_value - min_value + 1));
    }

    int B[array_size];
    for (int i = 0; i < array_size; i++)
    {
        B[i] = A[array_size - i - 1];
    }

    int C[array_size * 2];
    int count = 0;
    for (int i = 0; i < array_size; i++)
    {
        C[count] = A[i];
        count++;
        C[count] = B[i];
        count++;
    }

    printf("\nA:\n");
    for (int i = 0; i < array_size; i++)
    {
        printf("\t\t%i\n", A[i]);
    }

    printf("\nB:\n");
    for (int i = 0; i < array_size; i++)
    {
        printf("\t\t%i\n", B[i]);
    }

    printf("\nC:\n");
    for (int i = 0; i < (array_size * 2); i++)
    {
        printf("\t\t%i\n", C[i]);
    }
}