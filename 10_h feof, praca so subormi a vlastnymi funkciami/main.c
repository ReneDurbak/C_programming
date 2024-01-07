#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int overRozmer(int rozmer);
int vypocetObsahuPodstavy(int a, int b );
int vypocetObjemu(int vypocetObsahuPodstavy, int c);
int vypocetPovrchukvadra(int vypocetObsahuPodstavy, int a, int b, int c);
int uhlopriecka(int a, int b);
int telesovaUhlopriecka(int uhlopriecka, int c);


int main(int argc, char *argv[]) {
	
	FILE *fw,*fr;
	int a,b,c;
	char znak, pismenko;

	
	do{
		fr = fopen("kvader.txt","r");
		fw = fopen("kvader.txt","w");
		
		if (fr == NULL){
			printf("subor neexistuje");
		}else{
		
		
		printf("\nZadaj stranu A: ");
		scanf("%d", &a);
		a = overRozmer(a);
	
		
		printf("\nZadaj stranu B: ");
		scanf("%d", &b);
		b = overRozmer(b);
				
		printf("\nZadaj stranu C: ");
		scanf("%d", &c);
		c = overRozmer(c);
		
		uhlopriecka(a,b);
		

		
		// --------------------funkcia overRozmer priamo v programe--------------
		/*
		
		if ( a>0 && b>0 &&  c>0 ){
		
		printf("Zadal si spravne hodnoty.");
	}else{
		while( a<=0 ||  b<=0 ||  c<=0 ){
		
			
			printf("\nZadal si nespravne hodnoty, skus znova.");	
			
			printf("\nZadaj stranu A: ");
			scanf("%d", &a);
		
		
			printf("Zadaj stranu B: ");
			scanf("%d", &b);
		
			
			printf("Zadaj stranu C: ");
			scanf("%d", &c);
			
		
			
		
	}
	
	
	}
	*/
		
		printf("\n%d %d %d", a,b,c);
		
		fprintf(fw," a = %d  b= %d  c= %d Sp = %d V = %d S = %d Uhlopriecka = %d Telesova uhlopriecka = %d   ", a,b,c,vypocetObsahuPodstavy(a,b),vypocetObjemu(vypocetObsahuPodstavy(a,b), c), vypocetPovrchukvadra(vypocetObsahuPodstavy(a,b), a, b, c), uhlopriecka(a,b),telesovaUhlopriecka(uhlopriecka(a,b), c)  );
		
		if(fw != NULL){
			printf("\nsubor sa vytvoril.");
			fclose(fw);
			
			
			printf("\nPre pokracovanie sltacte - y , pre ukoncenie programu stlacte - n.\n");
			getchar();
			znak = getchar();
		
		if(znak =='y'){
		}}
		else{
			
			printf("subor sa nevytvoril.");
		
		}}}while( znak!='n');
	


	fclose(fr);


	return 0;
}


int overRozmer(int rozmer){

		while( rozmer<=0 ){
		
			
			printf("\nZadal si nespravne hodnoty, skus znova.\n Zadaj stranu znova:");	
			scanf("%d", &rozmer);
		
		

		
	}	
	
	
}

int vypocetObsahuPodstavy(int a, int b ){
	
	return a*b;
	
}

int vypocetObjemu(int podstava, int c){
	

	return podstava*c;
}

int vypocetPovrchukvadra(int podstava, int a, int b, int c){
	
	return 2*(podstava + b*c + a*c);
}

int uhlopriecka(int a, int b){
	
	int result = sqrt(pow(a,2)+pow(b,2));

	return result;
}

int telesovaUhlopriecka(int uhlopriecka, int c){
	

	int result =  sqrt(pow(c,2)+ pow(uhlopriecka,2));
	return result;
}

