
//Praca so suborom | najst kolko medzier riadkov a tabulatorov obsahuje subor

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

	FILE *subor_r, *subor_w;

	char znak, i;
	
	subor_r = fopen("text.txt", "r");
	subor_w = fopen("kopia.txt", "w");
	
	if(subor_r == NULL){
		printf("Subpr subor_r sa nenasiel");
	}else if(subor_w == NULL){	
		printf("Subpr subor_w sa nenasiel");
	}else{
		while((znak = fgetc(subor_r)) != EOF){
			
			for(i = 'a'; i < 'z'; i++){
				if(znak == i){
					znak -= 'a'-'A';
								
				}
			fputc(znak, subor_w);
			}
			
			
			
		}
	}
	
	fclose(subor_r);
	fclose(subor_w);
	
	return 0;
}
