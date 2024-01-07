#include <stdio.h>
#include <stdlib.h>


int main() {
	// deklaracia premennej typu file
	FILE *fr,*fw;
	
	//otvorenie suboru
	fr = fopen("ahoj.txt", "r");
	fw = fopen("kopiaAhoj.txt", "w");

	
	
	//kontrola ci subor existuje
	if(fr == NULL){
		printf("Nenasiel sa subor.");

	}
	
	
	//nacitanie suboru po znakoch
	char znak;
	
	
	while( (znak = fgetc(fr)) != EOF){
		putchar(znak);
		//nepracujeme len so suborom fw ale premennou znak
		//fgetc(fw); nespravny zapis
		//fget(znak); nespravny
		
		fputc(znak,fw);

	}
	
	//zatvorenie suboru
	fclose(fr);
	
	return 0;
}