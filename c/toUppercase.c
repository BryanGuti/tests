#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

void main(void)
{
    printf("\nFrom lowercase to uppercase.\n");
    string text = get_string("\nType anything: ");

    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (islower(text[i]))
        {
            printf("%c", toupper(text[i]));
        }
        else
        {
            printf("%c", text[i]);
        }
    }

    printf("\n");
}