#include <stdio.h>
#include <stdlib.h>


int main() {
	
	FILE *meno,*priezvisko,*merge;
	char c;
	
	meno = fopen("meno.txt","r");
	priezvisko = fopen("priezvisko.txt","r");
	merge = fopen("celemeno.txt","w");
	
	
	if(meno == NULL || priezvisko == NULL || merge == NULL){
		printf("Error");
		exit(1);
		
	}
	

	while((c= fgetc(meno)) != EOF){
		fputc(c, merge);
	}
	
	while((c= fgetc(priezvisko)) != EOF){
		fputc(c, merge);
	}
	
	fclose(meno);
	fclose(priezvisko);
	fclose(merge);
	
	return 0;
}
