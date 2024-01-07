#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//#include <iostream>

const int VELKOSTPOLA = 5;

int generujCisla(int dh, int hh);
void naplnPole(int *pole,unsigned int velkost,int dh, int hh);
void vypis(int *pole,unsigned int velkost);
void zorad(int *pole,unsigned int velkost);

int main(int argc, char *argv[]) {
	int dolnah,hornah;
	int pole[VELKOSTPOLA];
	srand(time(0));//generovanie nahodneho cisla stale to iste preto je tu incializacia nahodneho cisel s aktualnym casom
	/*
	printf("%d\n",rand());*/
	
	printf("Zadaj dolnu hranicu: ");
	scanf("%d",&dolnah);
	printf("Zadaj hornu hranicu: ");
	scanf("%d",&hornah);
	
	while(dolnah>hornah){
		printf("Horna hranica(%d) je mensia ako dolna hranica(%d) zadaj novu hornu hranicu:",hornah,dolnah);
		scanf("%d",&hornah);
	}
	

	naplnPole(pole,VELKOSTPOLA,dolnah,hornah);
	vypis(pole,VELKOSTPOLA);
	zorad(pole,VELKOSTPOLA);
	vypis(pole,VELKOSTPOLA);
	return 0;
}



int generujCisla(int dh, int hh){
	return rand() % (hh-dh)+dh;
}
void naplnPole(int *pole,unsigned int velkost,int dh, int hh){
	int i;
	for(i=0;i<velkost;i++){
		*(pole+i)=generujCisla(dh,hh);
	}
}
void vypis(int *pole,unsigned int velkost){
	int i;
	for(i=0;i<velkost;i++){
		printf("%d prvok pola je %d\n",i,*(pole+i));
	}
}
void zorad(int *pole,unsigned int velkost){
	int i;
	for(i=0;i<velkost;i++){
		if(pole[i]>pole[i-1]){
			pole[i-1] = pole[i];
		}
	}
}
