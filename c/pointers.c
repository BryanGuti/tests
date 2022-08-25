#include <stdio.h>


int main(){
	char *string = "Hello, world!";
	
	int counter = 0;

	while((int) string[counter] != 0){
		printf("%c", string[counter]);
		counter++;
	}
	printf("\n");
	
	counter = 0;

	while((int) *(string + counter) != 0){
		printf("%c", *(string + counter));
		counter++;
	}
	printf("\n");

	return 0;	
}
