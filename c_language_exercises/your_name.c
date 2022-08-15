#include <cs50.h>
#include <stdio.h>

int main()
{
	string name = get_string("What is your name?: ");
	printf("Welcome to the cs50 crash course, %s.\n", name);
	return 0;
}
