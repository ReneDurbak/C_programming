#include <stdio.h>
#include <stdlib.h>

const VELKOST_POLA = 8;

void vypisanie_prvkov(int pole[], int velkost_pola){
	int i;

	
	for(i = 0; i < velkost_pola; i++){
		printf("%d", pole[i]);
		if(i<velkost_pola-1){
			printf(", ");
		}
			
		
	}
}


int max_prvok(int pole[],int velkost_pola){
	int i, max=0;

	for(i = 0 ; i < velkost_pola; i++){
		if( pole[i] > max ){
			max = pole[i];
		
		}
	}
	return max;
}


void min_prvok(int pole[],int velkost_pola){
	int i;
	
	
	for(i = 0; i < velkost_pola; i++){
		if(pole[1]> pole[i]){
			pole[1] = pole[i];
		}
	}
	printf("\nNajmensi prvok pola je: %d", pole[1]);
}



int sucet_prvkov(int pole[],int velkost_pola){
	int i, sucet = 0;
	
	for(i = 0; i < velkost_pola; i++){
		sucet = sucet + pole[i];
	}
	
	return sucet;
}


float priemer_prvkov(int sucet_prvkov, int velkost_pola){
	return (float)sucet_prvkov/velkost_pola;
}





int main(int argc, char *argv[]) {
	
	int pole[]={5,6,7,8,9,10,11,12};
	char expression;
	int a = sizeof(pole);
	printf("%d\n", a);
	
	vypisanie_prvkov(pole,VELKOST_POLA);
	
	printf("\np-priemer, x-najvacsi prvok,m-najmensi prvok, s-sucet \n");
	scanf("%c", &expression);
	
	switch(expression){
		 case 'x': printf("\nNajvacsi prvok: %d ", max_prvok(pole,VELKOST_POLA));
		 			break;
		 case 'm': min_prvok(pole,VELKOST_POLA);
		 			break;
		 case 's': 	printf("\nSucet prvkov je: %d",sucet_prvkov(pole,VELKOST_POLA));
		 			break;

		 case 'p': 	printf("\nPriemer prvkov je: %.3f", priemer_prvkov(sucet_prvkov(pole,VELKOST_POLA),VELKOST_POLA));
					break;
	}
	
	/*printf("\nNajvacsi prvok: %d ", max_prvok(pole,VELKOST_POLA));
	
	min_prvok(pole,VELKOST_POLA);
	
	printf("\nSucet prvkov je: %d",sucet_prvkov(pole,VELKOST_POLA));
	
	printf("\nPriemer prvkov je: %.3f", priemer_prvkov(sucet_prvkov(pole,VELKOST_POLA),VELKOST_POLA));*/
	
	

	
	
	
	
	
	return 0;
}





















