#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	FILE *fw,*fr;
	float a,b,c,V,S;
	char znak, pismenko;
	
	
	do{ 
	fw = fopen("vypocet.txt", "w");
	fr = fopen("vypocet.txt", "r");
	

	
	if(fr == NULL){
		printf("Nenasiel sa subor");
	}
	
	
	printf("Zadaj stranu a: ");
	scanf("%f", &a);
	
	printf("\nZadaj stranu b: ");
	scanf("%f", &b);
	
	printf("\nZadaj stranu c: ");
	scanf("%f", &c);
	
	V = a*b*c;
	S = 2*(a*b+a*c+b*c);
	
	fprintf(fw,"\na = %.2f	b = %.2f	c = %.2f	V = %.2f	S = %.2f\n", a,b,c,V,S);
		
	if(fw != NULL){
		printf("\nSubor sa vytvoril.");
	
		}else{
			printf("\nNevytvoril sa subor.");
		}

	fclose(fw);                                                           
	
		while((pismenko = fgetc(fr)) != EOF){
			
			putchar(pismenko);
			
		}
		          
		
		
	
		printf("\npre ukoncenie napis k: ");
		getchar();	
		znak = getchar();
	}while(znak != 'k');
	
	
	fclose(fr);
	
	
	return 0;
}
