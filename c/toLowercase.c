#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

void main(void)
{
    printf("\nFrom uppercase to lowercase.\n");
    string text = get_string("\nType anything: ");

    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (!islower(text[i]))
        {
            printf("%c",tolower(text[i]));
        }
        else
        {
            printf("%c", text[i]);
        }
    }

    printf("\n");
}