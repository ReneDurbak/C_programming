#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int cislo = 0, i = 0;
	char znak;
	
	
	while( cislo != 15){
		
		cislo += 1;
		printf("%d", cislo);
		if(cislo<15){
			printf(",");
		}
		
	}
	
	
	do{

		i++;
		printf("\n\nZadaj %d. znak: ", i);
		znak = getchar();
		printf("\nZadany znak je %c ", znak);
		getchar();
	
		
	}while(znak != 'y' && znak !='Y');
	
	
	return 0;
}