#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//const int arrSize = 10;
int generujCislo(int dh, int hh);
void naplnPole(int *pole, unsigned int velkostPola, int dh, int hh);
void vypisPole(int *pole, unsigned int velkostPola);
int maxPrvokPola(int *pole, unsigned int velkostPola);
FILE *fw;
//nacitajte do suboru out.txt

int main(int argc, char *argv[]) {
	
	fw = fopen("out.txt","w");
	int arrSize,dolnah, hornah;
	
	if(fw == NULL){
		exit(EXIT_FAILURE);
	}
	printf("Zadaj velkost pola: ");
	scanf("%d",&arrSize);
	
	int arr[arrSize];
	srand(time(0));
	
	printf("Zadaj dolnu hranicu: ");
	scanf("%d",&dolnah);
	printf("Zadaj hornu hranicu: ");
	scanf("%d",&hornah);
	
	
	while(dolnah > hornah){
		printf("horna hranica (%d) je mensiea ako dolna hranica (%d), zadaj novu hornu hranicu: ", hornah, dolnah);
		scanf("%d", &hornah);
		
	}
	
	
	naplnPole(arr, arrSize, dolnah, hornah);
	vypisPole(arr, arrSize);
	printf("\nNajvacsi prvok je : %d", maxPrvokPola(arr, arrSize));
	
	
	
	
	return 0;
}

int generujCislo(int dh, int hh){
	
	return rand() % (hh-dh)+dh;
}

void naplnPole(int *pole, unsigned int velkostPola, int dh, int hh){
	
	int i = 0;
	
	for(i; i < velkostPola; i++){
		*(pole+i) = generujCislo(dh,hh);
	}
	
}


void vypisPole(int *pole, unsigned int velkostPola){
	
	int i = 0;
	printf("\n");
	for(i; i < velkostPola; i++){
		
		printf("%d.cislo: %d\n",i+1,*(pole+i));
		fprintf(fw,"%d.cislo: %d\n",i+1,*(pole+i));
	}
}


int maxPrvokPola(int *pole, unsigned int velkostPola){
	int i = 1, max = *pole;
	
	for(i; i < velkostPola ; i++){
		if(max < *(pole+i)){
			max = *(pole+i);
		}
	}
	fprintf(fw, "\nNajvacsi prvok je: %d", max);
	return max;
}
