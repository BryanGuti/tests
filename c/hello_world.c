#include <stdio.h>
#include <cs50.h>

char keep_adding(void);

int main(void)
{
    int result = 0;
    char rerun;

    do
    {
        result += get_int("Pick a number to add: ");
        rerun = keep_adding();
    } while (rerun == 'y' || rerun == 'Y');

    printf("The whole sum is: %d\n", result);

    return 0;
}

char keep_adding(void)
{
    char rerun;

    do
    {
        rerun = get_char("Did you want to keep adding numbers? [y/n]: ");

    } while (rerun != 'y' && rerun != 'Y' && rerun != 'n' && rerun != 'N');

    return rerun;
}