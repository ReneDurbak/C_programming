#include <stdio.h>
#include <stdlib.h>


int nasobenie(int c1, int c2);

int main() {
	int cislo;
	int cislo2;
	
	FILE *fr, *fw;
	


	fr = fopen("vstup.txt","r");
	fw = fopen("vysledok.txt","w");

	if(fr == NULL){
		printf("Subor vstup.txt sa nenasiel.");
		exit(EXIT_FAILURE);
	}
	if(fw == NULL){
		printf("Subor vysledok.txt sa nevytvoril.");
		exit(EXIT_FAILURE);
	}
	
	while(feof(fr)==0){
		
		fscanf(fr,"%d %d",&cislo, &cislo2);
		
		fprintf(fw,"%d*%d --> %d\n", cislo,cislo2, nasobenie(cislo,cislo2));
	}

	
	fclose(fr);
	fclose(fw);


	return 0;
}



int nasobenie(int c1, int c2){


	if (c1 && c2 == 0) return 0;
	if (c1 == 1) return c2;
	if (c2 == 1) return c1;
	return c2 + nasobenie(c1-1,c2);
	
}