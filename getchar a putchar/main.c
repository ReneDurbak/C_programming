#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char znak;
	int i;

	
	for(i = 0; i < 7; i++){
	
	printf("\n\nZadaj %d. znak: ", i+1);
	znak = getchar();
	printf("\nZadany %d. znak je %c ", i+1, znak);
	//znak = getchar(); // nacitava enter aby nepreskakovalo
	

	
	
	}
	
	
	
	
	return 0;
}
