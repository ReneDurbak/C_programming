#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int faktorial(cislo);

int main(int argc, char *argv[]) {
	int cislo,i;
	char znak;
	
	do{
		system("cls");
		printf("Zadaj cislo: ");
		scanf("%d", &cislo);
	
	
			while(cislo<0){
				printf("\nChyba!");
				printf("\nZadaj cislo do 0 vyssie!: ");
				scanf("%d", &cislo);}
		
	
		//printf("faktorial z cisla %d je cislo %d", cislo, faktorial(cislo));
		for(i=0; i<cislo+1; i++){
			printf("\nfaktorial z cisla %d je cislo %d\n", i, faktorial(i));
			}

		printf("\nPre pokracovanie sltacte - y , pre ukoncenie programu stlacte - n.\n");
		getchar();
		znak = getchar();
	}while( znak!='n');

	
	return 0;
}



int faktorial(cislo){
	if (cislo==0 || cislo==1){
		return 1;
	}
	return cislo*faktorial(cislo-1);
}
