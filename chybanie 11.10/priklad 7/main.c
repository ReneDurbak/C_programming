#include <stdio.h>
#include <stdlib.h>

int vypocetObjemu(int a, int b, int c);

int main(int argc, char *argv[]) {
	
	FILE *vysledok_w, *vysledok_r, *objemKvadra_plus,*objemKvadra_plusr;
	
	int a;
	int b;
	int c;
	char znak;
	
	
	
	printf("Zadaj stranu a ");
	scanf("%d", &a);
	printf("Zadaj stranu b ");
	scanf("%d", &b);
	printf("Zadaj stranu c ");
	scanf("%d", &c);
	
	/*
	// zapisovavnie a citanie w/r
	//-------------w---------- vpisovanie
	vysledok_w = fopen("vysledok.txt", "w");
	
	if(vysledok_w == NULL){
		printf("Subor sa nenasiel.");
	}
	
	fprintf(vysledok_w, "%d %d %d", a,b,c);
	
	fclose(vysledok_w);
	
	
	//-------------r------------ citanie
	vysledok_r = fopen("vysledok.txt", "r");
	
	if(vysledok_w == NULL){
		printf("Subor sa nenasiel");
	}else{
			while((znak = fgetc(vysledok_w)) != EOF){
					putchar(znak);
		};
	};
	
	
		fclose(vysledok_r);*/
	// zapisovanie a citanie w+
	
	objemKvadra_plus = fopen("vysledok_kvader.txt","w+"); // neviem naco w+, ked ide aj w 
	
	if(objemKvadra_plus == NULL){
		printf("\nsubor sa nenasiel");
	}else
	{
		printf("\nsubor sa vytvoril");
	}
	
	
	fprintf(objemKvadra_plus,"\nObjem kvadra je: %d ", objemKvadra(a,b,c));
	fclose(objemKvadra_plus);
	
	
	objemKvadra_plusr = fopen("vysledok_kvader.txt","r");
	
	while((znak = fgetc(objemKvadra_plus)) != EOF){
			putchar(znak);
	}
	
	fclose(objemKvadra_plusr);
	

	
	return 0;
}

int objemKvadra(int a, int b, int c){

	return a*b*c;
}
