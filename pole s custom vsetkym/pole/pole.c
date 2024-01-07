#include <stdio.h>
#include <stdlib.h>



const int VELKOSTPOLA = 5;


void nacitajDoPola(int pole[], int velkostpola);
void vypisZPola(int pole[], int velkostpola);
void maxPrvokPola(int pole[], int velkostpola);
void minPrvokPola(int pole[], int velkostpola);


int main(int argc, char *argv[]) {
	
	int i, n;
	int pole[n];
	
	printf("Zadaj pocet prvkov pola: ");
	scanf("%d", &n);

	
	nacitajDoPola(pole, n);
	
	vypisZPola(pole, n);
	
	maxPrvokPola(pole, n);
	
	minPrvokPola(pole, n);
	
	
	

	
	
	
		
	
	
	return 0;
}





void nacitajDoPola(int pole[], int velkostpola){
	
	int i;
	
		
	for(i=0; i<velkostpola; i++){
		
		printf("Zadaj %d. prvok pola: ", i+1);
		scanf("%d", &pole[i]);
	}
	
};






void vypisZPola(int pole[], int velkostpola){
	
	int i;
	

		
		printf("\nPrvky pola: ");
		for(i=0; i<velkostpola; i++){
			printf("%d", pole[i]);
			if(i<velkostpola-1){
				printf(",");
			}
		}
	
	
};


void maxPrvokPola(int pole[], int velkostpola){
	
	int i, max= pole[0];

	
	for(i=1; i<velkostpola; i++){
		if (pole[0] < pole[i]) {
      	pole[0]= pole[i];
	}

}
printf("\n\nNajvacsi prvok pola je: %d  \n", pole[0]);
};





void minPrvokPola(int pole[], int velkostpola){
	
	int i, min=pole[0];

	
	for(i=1; i<velkostpola; i++){
		if (pole[0] > pole[i]) {
      	pole[0] = pole[i];
	}

}
printf("\nNajmensi prvok pola je: %d  \n", pole[0] );
};

