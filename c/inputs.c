#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("What's your name? ");
    int age = get_int("How old are you? ");

    printf("Hi! %s, you are %d years old.\n", name, age);

    return 0;
}