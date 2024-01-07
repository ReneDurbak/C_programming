#include <stdio.h>
#include <stdlib.h>
int faktorial(int a);
int main(int argc, char *argv[]) {
	int c;
	FILE *fr,*fw;
	
	fr=fopen("vstup.txt","r");
	fw=fopen("vysledok.txt","w");
	
	if(fr==NULL){
		printf("subor sa nenasiel");
		exit (EXIT_FAILURE);
	}else{
		if(fw==NULL){
			printf("subor sa nevytvoril");
			exit (EXIT_FAILURE);

			
			
		}else{
			while(feof(fr)==0){
				fscanf(fr,"%d! ",&c);
				if(c<0){
					fprintf(fw,"%d! -> ERROR\n", c);
				}else{
					fprintf(fw,"%d! -> %d\n",c,faktorial(c));
				}
				
			}
		}
	}
	fclose(fr);
	fclose(fw);
	
	// return 0 == EXIT_SUCCESS
	return 0;
}
int faktorial(int a){
	/*int i, f=1;
	for(i=1;i<a+1;i++){
		f=f*i;
	}
	return f;*/
	
	if (a==0 || a==1)return 1;
	
	if(a > 1) return a*faktorial(a-1);
}
