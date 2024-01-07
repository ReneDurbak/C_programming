#include <stdio.h>
#include <stdlib.h>
FILE *fw;

void hlavicka();
void platno(int vyska,int sirka);
void kruh(int cx ,int cy, int r);
void pata();
int rekurziaKruh(int cx, int cy ,int r, int zmensenie);
int nacitajCislo(int cislo, char pojem[]);




int main() {
	
	fw = fopen("kruh.html","w");
	
	int sirka = nacitajCislo(sirka,"Sirku");
	int vyska = nacitajCislo(vyska,"Vysku");
	int kruhX  = nacitajCislo(vyska,"KruhX");
	int kruhY = nacitajCislo(vyska,"KruhY"), polomer = nacitajCislo(vyska,"Polomer"), zmensenie = nacitajCislo(vyska,"Zmensie");
	
	if(fw == NULL){
		printf("Subor kruh.html sa nevytvoril");
		exit(EXIT_FAILURE);
	}
	

	if(kruhX <= 0){
		while (kruhX<=0){
			printf("Zadaj kruhX: \n");
		scanf("%d", &kruhX);
		}
	
	}
	if(kruhX > sirka){
		while (kruhX > sirka){
			printf("Zadaj kruhX aby nebol vacsi ako sirka platna: \n");
		scanf("%d", &kruhX);
		}
	}
	
	
	if(kruhY <= 0){
		while (kruhY<=0){
			printf("Zadaj kruhY: \n");
		scanf("%d", &kruhY);
		}
	}
	if(kruhY > vyska){
		while (kruhY > vyska){
			printf("Zadaj kruhY aby nebol vacsi ako sirka platna: \n");
		scanf("%d", &kruhY);
		}
	}
	
	

	if(polomer <= 0){
		while (polomer<=0){
			printf("Zadaj polomer: \n");
		scanf("%d", &polomer);
		}
	}
	

	if(zmensenie<= 0){
		while (zmensenie<=0){
			printf("Zadaj zmensenie: \n");
		scanf("%d", &zmensenie);
		}
	}
	

	 hlavicka();
	
	 platno(vyska,sirka);
	
	 kruh(kruhX ,kruhY, polomer);
	 rekurziaKruh(kruhX, kruhY ,polomer, zmensenie);
	 
	 pata();
	
	fclose(fw);
	return 0;
}





void hlavicka(){
	
	fprintf(fw,"<!DOCTYPE html>\n");
	fprintf(fw,"<html>\n");
	fprintf(fw,"<body>\n");
	
}

void platno(int vyska, int sirka){
	
	fprintf(fw,"\t<svg width = \"%d\" height= \"%d\" >\n", sirka, vyska);
	fprintf(fw,"\t\t<g fill = \"none\" stroke-width = \"2\" stroke=\"green\">\n");
}
void kruh(int cx ,int cy, int r){
	
		fprintf(fw,"\t\t\t<circle cx = \"%d\" cy = \"%d\" r=\"%d\"/>\n", cx, cy,r);
		
}

void pata(){
	
	fprintf(fw,"\t\t</g>\n ");
	fprintf(fw,"\t</svg> \n");
	fprintf(fw,"</body> \n");
	fprintf(fw,"</html> ");
	
}

int rekurziaKruh(int cx,int  cy ,int r, int zmensenie){
	
	fprintf(fw,"\t\t\t<circle cx = \"%d\" cy = \"%d\" r=\"%d\"/>\n", cx, cy,r);
	
	if(r == 0){
		exit(EXIT_SUCCESS);
	}
	
	r -= zmensenie;
	return rekurziaKruh(cx, cy ,r, zmensenie);

}

int nacitajCislo(int cislo, char pojem[]){

	
	printf("Zadaj %s:  \n", pojem);
	scanf("%d", &cislo);
	
	
	
	return cislo;
}

