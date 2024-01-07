#include <stdio.h>
#include <stdlib.h>



void NacitaniedoPola(int pole[], unsigned int velkostpola);
void VypisPola(int pole[], unsigned int velkostpola);

const VELKOSTPOLA = 5;

int main() {
	
	int i, pole[VELKOSTPOLA];
	char znak;
	
	do{
	
	NacitaniedoPola(pole, VELKOSTPOLA);
	VypisPola(pole, VELKOSTPOLA);
	printf("Chces pokracovat");
	znak = getchar();
	
	}while(znak != 'n' && znak != 'N')
	
	
	/*printf("Chces pokracovat?");
	scanf("%c", znak);
	
	switch(znak){
		
		case 'y':
	
				  NacitaniedoPola(pole, VELKOSTPOLA);
				  VypisPola(pole, VELKOSTPOLA);
				  break;
		
		case 'Y': 
				  NacitaniedoPola(pole, VELKOSTPOLA);
				  VypisPola(pole, VELKOSTPOLA);
				  break;
		
		case 'N': 	printf("Program skoncil");
					break;
		case 'n': 	printf("Program skoncil");
					break;
		default: printf("Zla volba");
	}
	*/
	
	
	

	return 0;
}



void NacitaniedoPola(int pole[], unsigned int velkostpola){
	
	int i;
	

	for(i = 0; i < velkostpola; i++){
	printf("Zadaj %d. prvok pola: ", i+1);
	scanf("%d", pole[i]);

}
}



void VypisPola(int pole[], unsigned int velkostpola){
	
	int i;
	
	for(i = 0; i < velkostpola; i++){
		
		printf("%d", pole[i]);
		if(i>velkostpola){
			printf(",");
		}
		
	}
	
}


