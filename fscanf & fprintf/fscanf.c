#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	FILE *fw,*fr,*fr2;
	float a,b,c,V,S;
	char pismenko;
	
	fr = fopen("vstup.txt", "r");
	do{ 
	
	fw = fopen("vypocet.txt", "w");
	fr2 = fopen("vypocet.txt", "r");
	
	if(fr==NULL){
	
	printf("subor nie je \n");
	}
	
	fscanf(fr,"%f %f %f",&a,&b,&c);
	
	//printf("\n %f %f %f", a,b,c);
	
	V = a*b*c;
	S = 2*(a*b+a*c+b*c);
	
	fprintf(fw,"\n a = %f	b = %f	c = %f	V = %f	S = %f", a,b,c,V,S);
	
	if (fw != NULL){
		printf("\nsubor sa vytvoril.");
	}
	fclose(fw);                                                           

		
		while((pismenko = fgetc(fr2)) != EOF){
			
			putchar(pismenko);
			
		}
		
		printf("\npre ukoncenie napis k: ");
		
		
		pismenko = getchar();
		getchar();
		
	if(fgetc(fr) == EOF){
		fr = fopen("vstup.txt", "r");
	}
	}while(pismenko != 'k');
	
	
	fclose(fr);fclose(fr2);
	
	
	return 0;
}
