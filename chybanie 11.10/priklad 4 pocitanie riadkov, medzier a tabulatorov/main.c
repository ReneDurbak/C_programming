#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	FILE *subor_r;
	
	int riadky = 0;
	int medzera = 0;
	int tab = 0;
	
	char znak;
	
	subor_r = fopen("text.txt", "r");
	
	if(subor_r == NULL){
		printf("Subpr subor_r sa nenasiel");
	}else{
		while((znak = fgetc(subor_r)) != EOF){
			
			if(znak == ' '){
				medzera++;
			};
			
			if(znak == '\n'){
				riadky++;
			};
			
			if(znak == '\t'){
				tab++; 
			}
		};
		
		//riadky++;
		
		printf("Pocet medzier> %d\nPocet riadkov> %d\nPocet tabulatorov> %d", medzera, riadky, tab);
	};
	
	fclose(subor_r);
		
	return 0;
}
