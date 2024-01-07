#include <stdio.h>
#include <stdlib.h>
#include <string.h>



char *strCopy(char *destination, char *source);
int pocetZnakov(char string[]);
int pocetPismen(char string[]);
char translateLetters(char string[]);
void linesFile();


int main(int argc, char *argv[]) {
	
	char line[200],max[200], min[200];
	FILE *fr = fopen("text.txt","r");
	
	
	char strA[100] = "Ahoj kamarati a kamaratky, priatelia programatori.";
	char strB[100];
	
	char *pstrA = &strA;
	char *pstrB = &strB;
	
	
	

	//----------------Uloha 1--------------------
	/*
	for( int i = 0; i <= 100; i++ ) {

		*(pstrB+i)= *(pstrA+i);
		//strB[i] = strA[i];
	
	}
	
	printf("%s", strB);*/
	
	//----------------Uloha 2--------------------
	/*
	*strCopy(strB, strA);
	printf("%s", strB);
	*/
	
	
	
	//-----------------Uloha 3---------------------
	
	char retazec[20];
	
	printf("Zadaj retazec: ");
	gets(retazec);
	
	//printf("%s",retazec);
	
	pocetZnakov(retazec);
	
	pocetPismen(retazec);
	
	translateLetters(retazec);


	if(fr == NULL){
		exit(EXIT_FAILURE);
	}else if(fr != NULL){
	
		while(fgets(line,sizeof(line),fr)!=NULL) // Cyklus bude prebiehat kym v subore bude nejaky znak
		{
	
			if(strlen(max)<strlen(line)){	
				strcpy(max,line);
		}
			strcpy(min,line);
			
			if(strlen(min)<strlen(max)){
					
		}
		}
		
		printf("\n-----------------------------------------");
		printf("\n\nNajdlhsi riadok je: ");
		printf("\n%s \n",max);
		
		printf("Najkratsi riadok je: ");
		printf("\n%s \n", min);
	
	
	
	}

	fclose(fr);
	return 0;
}



char *strCopy(char *destination, char *source){
	
	for(int i = 0; i <= 100; i++){
		 *(destination+i) = *(source+i);
	}
	
}


int pocetZnakov(char string[]){

	printf("\nDlzka stringu je %zu",strlen(string)); 
	
}


int pocetPismen(char string[]){
	
	int i, count = 0;
   

    for (i = 0; i < strlen(string); i++){
        if (string[i] != ' ' && '.'&&']'&&'/'&&'('&&')'&&'['&&';'&&',') {
            count++;
        }
    }
    
    printf("\nPocet pismen je: %d\n", count);
    
}


char translateLetters(char str[]){
	char newStr[20];
	
	printf("String vo velkych pismenach:");
 	puts(strupr(str)); //Urobi string vo velkych pismenach
	
	
	
	for(int i=0;i<=strlen(str);i++){
      if(str[i]>=65&&str[i]<=90)
         str[i]=str[i]+32;
   }
	
	printf("\n");
	printf("String v malych pismenach:");
	printf("%s", str);
}

void linesFile(){
	
}