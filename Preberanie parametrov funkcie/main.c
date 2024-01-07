#include <stdio.h>
#include <stdlib.h>
// -----PREBERANIE PARAMETROV

int max = 10, min = 20;
void vymen(int min, int max);
void vymen2(int *min, int *max);
void obd (unsigned int a, unsigned int b);

int main(int argc, char *argv[]) {
	
	char znak;
	int a,b;
	
	vymen(min,max); //preberanie parametrov hodnotou - netrvala zmena
	printf("po klasickej funkcii  ---> max:%d a min: %d", max,min);
	printf("\n");
	
	vymen2(&min,&max);//kedze funkcia prebera pointer a my mame klasicku premennu musime jej dat adresu(&) //preberanie parametrov odkazom = pointerom - trvala zmena
	printf("\npo funkcii s pointerom ---> max:%d a min: %d", max,min);
	
	
	//---- PREBERANIE PARAMETROV POMOCOU cmd
	
	
	printf("\nPocet argumentov: %d\n", argc);
	//printf("%s %s %s", argv[1],argv[2],argv[3]);
	
	for(int i = 1; i < argc; i++){
	printf("Argc %d ====> %s\n", i, argv[i]);
	}
	
	
	do{
		printf("zadaj stranu a: \n");
		scanf("%d",&a);
		
		printf("zadaj stranu b: \n");
		scanf("%d",&b);
		
		obd(a, b);
		
		printf("Pre ukoncenie napis 'k': \n");
		znak = getchar();
	}while(znak != 'k');
	return 0;
	
}


void obd (unsigned int a, unsigned int b){
	int i,j;
	for(i=0; i<b; i++)
    {

        for(j=0; j<a; j++)
        {
                if(i == 0 || i == b-1 || j == 0 || j == a-1){
                	printf("*");
				}else{
        	printf(" ");
		}
                
        }
            
        

        printf("\n");
    }

	
}

void vymen(int min, int max){
	int m = min;
	
	if(min > max){
		min = max;
		max = m;
	}
	printf("\nmax je : %d a min je: %d\n",max, min);
}

void vymen2(int *min, int *max){
	int m = *min;
	
	if(*min > *max){
		*min = *max;
		*max = m;
	}
	printf("\nmax je : %d a min je: %d",*max, *min);
}
	
