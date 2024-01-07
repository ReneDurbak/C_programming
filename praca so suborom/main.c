#include <stdio.h>
#include <stdlib.h>


int main() {
	
	
	FILE *fr = fopen("basnicka.txt","r");
	
	char znak;
	
	//EOF koniec suboru
	// fgetc = fgetchar
	
	if(fr != NULL){ //ked su existuje, NULL = neexistuje
 		while((znak = fgetc(fr)) != EOF){
			putchar(znak);
		}
		
	}else{
			printf("subor neexistuje");
		}	
	
	
	
	fclose(fr);
	
	return 0;
}