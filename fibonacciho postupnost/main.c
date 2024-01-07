#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int vypocet(int cislo);


int main() {
	
	FILE *fr, *fw;
	
	
	int cislo;


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
		
		fscanf(fr,"%d",&cislo);
		
		fprintf(fw,"%d --> %d\n", cislo, vypocet(cislo));
	}

	
	fclose(fr);
	fclose(fw);
	


	


	
	return 0;
}




int vypocet(int cislo){
	
	int F0 = 0;
	int F1 = 1;

	
	if(cislo == 0) return F0;
	if(cislo == 1) return F1;
	return vypocet(cislo-2)+vypocet(cislo-1);
	
}
