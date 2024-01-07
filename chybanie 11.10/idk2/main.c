#include <stdio.h>
#include <stdlib.h>

void* objemKvadra(float a, float b, float c);

int main(int argc, char *argv[]) {
	float a, b, c;
	char znak;
	
	FILE *kvader_w, *kvader_r, *kvader_wPlus;
	
	printf("Zadaj stranu a> ");
	scanf("%f", &a);
	
	printf("Zadaj stranu b> ");
	scanf("%f", &b);
	
	printf("Zadaj stranu c> ");
	scanf("%f", &c);
	
	// zapisovanie a citanie w/r
	/*
	kvader_w = fopen("kvader_w.txt", "w"); //otvorenie suboru
	
	if(kvader_w == NULL){
		printf("Subor kvader_w sa nenasiel");
	}
		
	fprintf(kvader_w, "Objem kvadra je> a = %.2f, b = %.2f, c = %.2f, V = %.2f", a, b, c, a*b*c);
	
	fclose(kvader_w); // zatvorenie suboru
	
	kvader_r = fopen("kvader_w.txt", "r"); //otvorenie suboru 
	
	if(kvader_w == NULL){
		printf("Subor kvader_r sa nenasiel");
	}else{
		while((znak = fgetc(kvader_w)) != EOF){
			putchar(znak);		
		}
	}
	
	fclose(kvader_r); //zatvorenie suboru
	*/
	
	//zapisovanie/citanie r+
	
	kvader_wPlus = fopen("kvader.txt", "w+");
	
	if(kvader_wPlus == NULL){
		printf("Subor sa nenasiel");
	}else{
		printf("Subor sa vytvoril");
	}
	
	fprintf(kvader_wPlus, "Objem kvadra je: ", objemKvadra(a, b, c));
	
	while((znak = fgetc(kvader_wPlus)) != EOF){
		putchar(znak);
	}
	
	fclose(kvader_wPlus);
	
	return 0;
}

void* objemKvadra(float a, float b, float c){
	float objem = a*b*c;
	
	return objem;
}
