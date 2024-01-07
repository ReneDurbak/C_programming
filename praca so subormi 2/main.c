#include <stdio.h>
#include <stdlib.h>


int main() {
	
	FILE *fr = fopen("ahoj.txt", "r");

	char znak;
	
	if(fr == NULL){
		printf("Nenasiel sa subor.");

	}
	
	while( (znak = fgetc(fr)) != EOF){
		putchar(znak);

	}
	
	fclose(fr);
	
	return 0;
}