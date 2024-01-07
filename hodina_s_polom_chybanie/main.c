 /*
priklad - deklaracia a inicializacia pola = definicia pola
*/


#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

const int VELKOST_POLA = 8;


void vypisPrvkyPola(int pole[], int velkostPola){
	int i = 0;
	for(i = 0; i < velkostPola; i++){
		printf("%d", pole[i]);
		//vykona to aby za poslednym cislom nebola ciarka
		if(i<7){
			printf(", ");
}
}
}

int maxPrvokPola(int pole[], int velkostPola){
	int i = 0;
	int max = 0;
	for(i =0 ; i < velkostPola; i++){
		if( pole[i] > pole[0] ){
			pole[0] = pole[i];
		}
	}
	return pole[0];
}

int sucetPrvkovPola(int pole[],int velkostPola){
	int i = 0;
	int sucet = 0;
	for(i=0; i<8; i++){
	sucet = sucet + pole[i];
	}
	return sucet;
}


float priemerPrvkovPola(int sucetPrvkovPola, int velkostPola){
	return (float)sucetPrvkovPola / velkostPola;
}




int main(int argc, char *argv[]) {
	
	//int max = 0, sucet = 0, priemer;
	
	//definicia pola - staticka
	//int pole[10] = {5,16,-2,8,11,6,9,56,8,10};
	
	int pole[] = {1,2,3,4,5,6,7,8};
	
	/*
	//vypis 4. prvku pola
	printf("%d, ", pole[4]);
	*/
	
	//vypiste vsetky prvky pola
	/*printf ("Prvky pola: ");
	*/
	
	
	
	
	vypisPrvkyPola(pole, VELKOST_POLA);
	
	printf("\nMaximalny prvok pola je %d", maxPrvokPola(pole, VELKOST_POLA));
	
	printf("\nSucet prvkov pola je %d", sucetPrvkovPola(pole, VELKOST_POLA));
	
	printf("\nPriemer prvkov pola je %.3f", priemerPrvkovPola(sucetPrvkovPola(pole, VELKOST_POLA), VELKOST_POLA));
	
	
	
	//for(int i=0; i<8; i++){
		/*printf("%d", pole[i]);
		//vykona to aby za poslednym cislom nebola ciarka
		if(i<7){
			printf(", ");
		}*/
		//najde max prvok pola
		/*if(pole[i] > max){
			max = pole[i];
		}
	}
	//vypise max prvok pola
	*/
	//printf("\nMaximalny prvok pola je %d", max);
	
	
	//sucet prvkov pola
	/*for(int i=0; i<8; i++){
	sucet = sucet + pole[i];
	}
	printf("\nSucet prvkov pola je %d", sucet);
	*/
	
	//priemer
	/*
	priemer = sucet / VELKOST_POLA;
	printf("\nPriemer prvkov pola je %d", priemer);
	*/	
		
	return 0;
}
