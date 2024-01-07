#include <stdio.h>
#include <stdlib.h>

void nacitatPole(int pole[], unsigned int velkostPola);
void vypisPrvky(int pole[], unsigned int velkostPola);
void maxPrvok(int pole[], unsigned int velkostPola);

const int VELKOSTPOLA = 3;

int main(int argc, char *argv[]) {
	
	int pole[VELKOSTPOLA];
	char znak;
	

	
	
	do{
		printf("\nChcete pokracovat?(Y/y = yes; N/n = no)");
		znak=getchar();
		getchar();
		if(znak == 'Y' || znak == 'y'){
			
		nacitatPole(pole,VELKOSTPOLA);
		vypisPrvky(pole,VELKOSTPOLA);	
		maxPrvok(pole,VELKOSTPOLA);
		}
		
		
		else if(znak == 'N' && znak == 'n'){
			break;
		}
		else{
			printf("Zadal si nespravny znak \n");
		}
	}while(znak != 'N' || znak != 'n');
	
	
	
	return 0;
}

void nacitatPole(int pole[], unsigned int velkostPola){
	
	int i=0;
	
	for(i; i< velkostPola;i++){
		printf("Zadaj %d. prvok pola:", i+1);
		scanf("%d", &pole[i]);
	}
	
}

void vypisPrvky(int pole[], unsigned int velkostPola){
	
	int i=0;
	
	for(i; i< velkostPola;i++){
		printf("%d", pole[i]);
		if(i<velkostPola-1){
			printf(",");
		}
	}
	
}


void maxPrvok(int pole[], unsigned int velkostPola){
	
	int i, max = pole[0];
	
	for(i = 1; i < velkostPola; i++){
		if(pole[i] > max){
			max = pole[i];
		}	
	}
	
	printf("Max prvok je: %d", max);
}
