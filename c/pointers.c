#include<stdio.h>

int main()
{
    int var = 99;
    int *pointerVariable;

    pointerVariable = &var;

    printf("Address of var variable: %x\n", &var);
    printf("Address stored in pointerVariable: %x\n", pointerVariable);
    printf("Value of pointerVariable: %d\n", *pointerVariable);
}