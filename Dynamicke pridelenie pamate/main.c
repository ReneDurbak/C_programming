#include <stdio.h>
#include <stdlib.h>

//Dynamicke pridelovanie pamate funkcia malloc a free




int main(int argc, char *argv[]) {
	
	int velkostPola, *cisla = NULL;
	
	cisla = (int *)malloc(velkostPola * sizeof(int));
	
	//Test pridelenej pamate
	if(cisla == NULL){
		printf("Pamat sa nepridelila");
		exit(EXIT_FAILURE); //return 1;
		
	}

	printf("Zadaj velkost pola: \n");
	scanf("%d", &velkostPola);
	
	if (velkostPola < 1){
		while(velkostPola < 1){
				printf("Zadaj  cislo od 1 vyssie \n");
				scanf("%d", &velkostPola);
		
	}
		}
	
	for(int i = 0; i < velkostPola; i++){
		printf("Zadaj %d. prvok: \n", i+1);
		scanf("%d", (cisla+i));
		
	}
	
	
		
	
	
	printf("Prvky pola: ");
	
	for(int i = 0; i < velkostPola; i++){
		printf("%d", *(cisla+i));
		
		if(i < velkostPola - 1)
		printf(",");
		
	
	}
	
	/*
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(cisla));*/
	
	
	free(cisla);
	
	
	return 0;
}
