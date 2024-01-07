#include <stdio.h>
#include <stdlib.h>

void vykresli(int a, int b,FILE *fw);
int over(int cislo);

int main(int argc, char *argv[]) {
	int riadky = atoi(argv[1]);
	int stlpce = atoi(argv[2]);
	
	riadky = over(riadky);
	stlpce = over(stlpce);
	FILE *fw;
	fw = fopen(argv[3],"w");
	
	if(fw == NULL){
		printf("Subor nevytvoreny");
		exit(EXIT_FAILURE);
	}
	
	vykresli(riadky, stlpce, fw);
	
	fclose(fw);
	
	return 0;
}

void vykresli(int a, int b, FILE *fw){
	int i,x;
	for(i=0;i<b;i++){
		if(i==0||i==b-1){
			for(x=0;x<a;x++){
				printf("*");
				fprintf(fw,"*");
			}	
		}else{
			printf("*");
			fprintf(fw, "*");
			for(x=0;x<a-2;x++){
				printf(" ");
				fprintf(fw," ");
			}
			printf("*");
			fprintf(fw,"*");
		}
		printf("\n");
		fprintf(fw,"\n");
	}
}
int over(int cislo){
	while(cislo<=0){
		printf("Zadaj cislo ktore splni podmieny: ");
		scanf("%d",&cislo);
	}
	return cislo;
}