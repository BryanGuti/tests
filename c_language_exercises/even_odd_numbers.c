#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int number;

    do
    {
        number = get_int("Type any number equal or greater than zero: ");
        /* code */
    } while (number < 0);

    if (number % 2 == 0)
    {
        printf("%i is even number.\n", number);
    }
    else
    {
        printf("%i is odd number.\n", number);
    }

    return 0;
}