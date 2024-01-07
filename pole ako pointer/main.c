#include <stdio.h>
#include <stdlib.h>

const int VELKOSTPOLA = 5;
int nacitanie(int *pole);
void vypisanie(int *pole);
int sucetPola(int* pole, int sizeArr);
float priemerPola(int* pole, int sizeArr, int sucet);
int maxPrvok(int* pole, int sizeArr);
int minPrvok(int* pole, int sizeArr);

int main() {
	/*
	int c = 10, *pointer = &c, pole[]={1,3,-5,7,0};
	
	printf("Hodnota na adrese %p je %d\n", pointer, *pointer);
	printf("%p %d\n\n", pointer, pointer);
	
	// %p desiatkova sustava
	printf("Hodnota na adrese %p je %d\n", &c, c);
	printf("%p %d\n",  &c, &c);
	
	printf("pole[1]= %d\n\n", pole[1]);
	
	
	
	
	// ----------------pole ako pointer----------------------
	
	
	
	printf("=========POLE AKO POINTER===========\n\n");
	
	printf("pole[0] = %d\n", *pole); // vypisuje prvy prvok
	
	printf("pole[1] = %d\n", *(pole+1)); //pole[1] 
	
	printf("pole[3] = %d\n", *(pole+3)); //pole[3]
	
	printf("Prvky pola: ");
	
	for(int i = 0; i < 5; i++){
		printf("%d", *(pole+i));
		
		if(i < 4) printf(",");
	
	}
	
	*(pole+2) = 13;
	
	printf("\npole[2] = %d\n", *(pole+2));
	
	printf("\nZadaj pole[2]:");
	scanf("%d", (pole+2));
	
	printf("\npole[2] = %d\n", *(pole+2));*/
	
	

	int pole2[VELKOSTPOLA];
	
	nacitanie(pole2);
	
	vypisanie(pole2);
	
	printf("\nSucet pola je: %d",sucetPola(pole2, VELKOSTPOLA));
	
	printf("\nMax prvok pola je: %d",maxPrvok(pole2, VELKOSTPOLA));
	
	printf("\nMin prvok pola je: %d",minPrvok(pole2, VELKOSTPOLA));
	
	printf("\nPriemer pola je: %.3f",priemerPola(pole2, VELKOSTPOLA, sucetPola(pole2, VELKOSTPOLA)));
	
	
	return 0;
	
}


int nacitanie(int* pole){
	int i;
	
	for(int i = 0; i < 5; i++){
		printf("Zadaj %d. prvok: ", i+1);
		scanf("%d", (pole+i));
	
	}

	return *pole;	
}

 
void vypisanie(int* pole){

	printf("Prvky pola su: ");
for(int i = 0; i < 5; i++){
		printf("%d", *(pole+i));
		
		if(i < 4) printf(",");
	
	}
	
}

int sucetPola(int* pole, int sizeArr){
	int sucet = 0;
	
	for(int i = 0; i < sizeArr; i++){
		sucet += *(pole+i);
		
	}
	
	return sucet;

}


int maxPrvok(int* pole, int sizeArr){
	
	int max = *pole;
	
	for(int i = 1; i < sizeArr; i++){
		if(max < *(pole+i)){
			
			max = *(pole+i);
		}
		
	}
	return max;
	
}


float priemerPola(int *pole, int sizeArr, int sucet){
	
	float priemer = 0.0;
	
	priemer = sucet/sizeArr;
	return priemer;
	
}



int minPrvok(int* pole, int sizeArr){
	
	int min = *pole;
	
	for(int i = 1; i < sizeArr; i++){
		if(min > *(pole+i)){
			
			min = *(pole+i);
		}
		
	}
	return min;
	
}