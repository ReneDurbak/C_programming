#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int vypocet(int cislo, int mocnina);

int main() {
	
	FILE *fr, *fw;
	int cislo, mocnina;
	//char znak;

	
	
	fr = fopen("vstup.txt","r");
	fw = fopen("vysledok.txt","w");
	
	
	if(fr == NULL){
		printf("\nsubor vstup.txt sa nenasiel");
		exit (EXIT_FAILURE);
		
	}
	if(fw == NULL){
		printf("subor sa nevytvoril");
		exit (EXIT_FAILURE);
		}
	while(feof(fr) == 0){
			fscanf(fr,"%d %d", &cislo, &mocnina);
			
			fprintf(fw, "\n%d na %d je %d", cislo,mocnina,vypocet(cislo,mocnina));
		
		}
		
		
	
	
	
	fclose(fr);
	fclose(fw);
	/*
	printf("Zadaj cislo: ");
	scanf("%d", &cislo);
	
	
	printf("Na akecislo ho chces umocnit? ");
	scanf("%d", &mocnina);
	*/
	
	
	
	//printf("\nmocnina je: %d ", vypocet(cislo, mocnina));
	
	/*printf("\nPre ukoncenie program zadaj n/N");
	getchar();
	znak = getchar();*/
	


	
	return 0;
}




int vypocet(int cislo, int mocnina){
	
	if(mocnina == 0) return 1;
	if(mocnina == 1) return cislo;
	if(mocnina > 0) return cislo*vypocet(cislo, mocnina-1);
	
}