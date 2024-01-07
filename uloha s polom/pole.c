#include <stdio.h>
#include <stdlib.h>



const int VELKOSTPOLA = 5;

void nacitajDoPola(int pole[], int velkostpola);
void vypisZPola(int pole[], int velkostpola);
void maxPrvokPola(int pole[], int velkostpola);
void minPrvokPola(int pole[], int velkostpola);



int main(int argc, char *argv[]) {
	
	int i;
	int pole[VELKOSTPOLA];
	
	nacitajDoPola(pole, VELKOSTPOLA);
	
	vypisZPola(pole, VELKOSTPOLA);
	
	maxPrvokPola(pole, VELKOSTPOLA);
	
	minPrvokPola(pole, VELKOSTPOLA);	
	
	
	return 0;
}



void nacitajDoPola(int pole[], int velkostpola){
	
	int i;
	
		
	for(i=0; i<velkostpola; i++){
		
		printf("Zadaj %d prvok pola: ", i+1);
		scanf("%d", &pole[i]);
	}
	
};




void vypisZPola(int pole[], int velkostpola){
	
	int i;
	
	for(i=0; i<velkostpola; i++){
		
		printf("\nPrvky pola: ");
		for(i=0; i<velkostpola; i++){
			printf("%d ", pole[i]);
		}
	}
	
};


void maxPrvokPola(int pole[], int velkostpola){
	
	int i;

	
	for(i=0; i<velkostpola; i++){
		if (pole[1] < pole[i]) {
      	pole[1] = pole[i];
	}

}
printf("\n\nNajvacsi prvok pola je: %d  \n", pole[1] );
}





void minPrvokPola(int pole[], int velkostpola){
	
	int i;

	
	for(i=0; i<velkostpola; i++){
		if (pole[1] > pole[i]) {
      	pole[1] = pole[i];
	}

}
printf("\nNajmensi prvok pola je: %d  \n", pole[1] );
}

