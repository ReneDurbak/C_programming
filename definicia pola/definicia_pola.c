/*
priklad - deklaracia a inicializacia pola = definicia pola 
*/


#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	//definicia pola - staticka
	//int pole[5]={10,5,6,-5,0};
	int i;
	int pole[]={1,2,3,4,5};
	
	//vypis 5. prvku pola
	// printf("%d", pole[4])
	
	printf("prvky pola: ");
	for(i = 0; i < 5; i++){
		printf("%d,", pole[i]);
	}
	

	
	max_prvok(pole);
	scitaj_prvky(pole);
	priemer(pole);
	delitelne_dvomi(pole);

	
	
	
		
	return 0;
}



void scitaj_prvky(int pole[]){
	int i, sum = 0;
	for(i = 0; i < 5; i++){
		sum =sum+ pole[i];

		}                     
			
		
	
	
	printf("\nSucet prvkov pola je: %d", sum);
}

void max_prvok(int pole[]){
	int i,max=pole[0];
	for(i = 0; i < 5; i++){
		if (max< pole[i]){
		max=+pole[i];
		}
			
		
	}
	
	printf("\nNajvacsi prvok pola je: %d", max);
}


void priemer(int pole[]){
	
	int i, sum = 0;
	double vysledok;
	for(i = 0; i < 5; i++){
		sum =sum+ pole[i];

		}

	vysledok = sum/5;
	
	printf("\nPriemer tychto cisel je %f", vysledok);  
}

void delitelne_dvomi(int pole[]){
	int i;
	
	printf("\nParne cisla su: ");
	for(i = 0; i < 5; i++){
		if (pole[i] %2 == 0)
		printf("%d,", pole[i]);

	
	}
	}

