#include <stdio.h>
#include <stdlib.h>

const int VELKOSTPOLA = 5;


void nacitajPrvkyPola(int pole[], int velkostPola);
void vypisPrvkyPola(int pole[], int velkostPola);
void maxPrvok(int pole[], int velkostPola);
void priemerPola(int pole[], int velkostPola);
void sucetPola(int pole[], int velkostPola);



int main(int argc, char *argv[]) {
	
	int pole[VELKOSTPOLA];
	char expression;
	
	nacitajPrvkyPola(pole, VELKOSTPOLA);
	vypisPrvkyPola(pole, VELKOSTPOLA);

	
	getchar();
		
	printf("\np-priemer, x-najvacsi prvok, s-sucet \n");
	scanf("%c", &expression);
	
	
	switch(expression){
		 case 'x': maxPrvok(pole,VELKOSTPOLA);
		 			break;
		 			
		 case 's': 	sucetPola(pole, VELKOSTPOLA);
		 			break;

		 case 'p': 	priemerPola(pole, VELKOSTPOLA);
					break;
	}
	
	return 0;
}

void nacitajPrvkyPola(int pole[], int velkostPola){
	
	int i;
	
	for(i = 0; i < velkostPola; i++){
		printf("Zadaj %d. prvok pola: ", i+1);
		scanf("%d", &pole[i]);
	}
}

void vypisPrvkyPola(int pole[], int velkostPola){
	
	int i;
	
	for(i = 0; i < velkostPola; i++){
		printf("%d", pole[i]);
		if(i<velkostPola-1){
			printf(",");
		}
	}
}


void maxPrvok(int pole[], int velkostPola){
	
	int i, max=pole[0];
	
	for(i = 0; i < velkostPola; i++){
		if(max<pole[i]){
			max = pole[i];
		}
	}
	printf("Najvacsi prvok je: %d", max);
}

void sucetPola(int pole[], int velkostPola){
	
	int i, sucet=0;
	
	for(i = 0; i < velkostPola; i++){
		sucet = sucet + pole[i];
	}
	
	printf("Sucet prvkov je: %d", sucet);
}

void priemerPola(int pole[], int velkostPola){
	
	int i, sucet=0;
	float priemer=0;
	
	for(i = 0; i < velkostPola; i++){
		sucet += pole[i];
	}
	priemer = (float)sucet/velkostPola;
	
	printf("Sucet prvkov je: %.3f", priemer);
}




