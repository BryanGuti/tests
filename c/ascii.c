#include <stdio.h>


void main(void)
{
    printf("Serching out the ascii code.\n\n");

    for(int i = 0; i < 256; i++)
    {
        printf("\t%i is %c\n", i, (char) i);
    }
}