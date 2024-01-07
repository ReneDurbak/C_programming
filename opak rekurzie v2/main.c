#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int vypocet(int cislo, int mocnina);

int main() {
	

	int cislo, mocnina;
	char znak;

	do{
	
	printf("\nZadaj cislo: ");
	scanf("%d", &cislo);
	
	
	printf("\nNa akecislo ho chces umocnit? ");
	scanf("%d", &mocnina);
	
	
	
	
	printf("\nmocnina je: %d ", vypocet(cislo, mocnina));
	
	printf("\nPre ukoncenie program zadaj n/N");
	getchar();
	znak = getchar();
	
}while(znak != 'n' && znak != 'N');

	
	return 0;
}




int vypocet(int cislo, int mocnina){
	
	if(mocnina == 0) return 1;
	if(mocnina == 1) return cislo;
	if(mocnina > 0) return cislo*vypocet(cislo, mocnina-1);
	
}