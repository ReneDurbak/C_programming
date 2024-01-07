#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct bod{
	int x;
	int y;
};

int vzdialenostZaciatok(struct bod a);
int dlzkaUsecky(struct bod a, struct bod b);
int stredUseckyX(struct bod a, struct bod b);
int stredUseckyY(struct bod a, struct bod b);

int main(int argc, char *argv[]) {
	
	struct bod O = {0, 0};
	struct bod A = {50, 100};
	struct bod B = {25, 200};
	
	//struct bod S = struct bod stredUsecky(struct bod a, struct bod b);

	printf("Vzdialenost bodu A: %d\n", vzdialenostZaciatok(A));
	printf("Vzdialenost bodu B: %d\n", vzdialenostZaciatok(B));
	
	printf("Dlzka usecky AB: %d\n", dlzkaUsecky(A, B));
	
	printf("Stred usecky AB -> x: %d\t y: %d\n", stredUseckyX(A,B), stredUseckyY(A,B));
	
	return 0;
}

int vzdialenostZaciatok(struct bod a){
	return sqrt(pow(a.x,2)+pow(a.y,2));
}

int dlzkaUsecky(struct bod a, struct bod b){
	int cisloX, cisloY;
	if(a.x > b.x){
		cisloX = a.x - b.x;
	}
	if(a.x < b.x){
		cisloX = b.x - a.x;
	}
	
	if(a.y > b.y){
		cisloY = a.y - b.y;
	}
	if(a.y < b.y){
		cisloY = b.y - a.y;
	}
	
	return sqrt(pow(cisloY,2)+pow(cisloX,2));
}

int stredUseckyX(struct bod a, struct bod b){
	int cisloX, stredX;
	if(a.x > b.x){
		cisloX = a.x - b.x;
		return cisloX/2+b.x;
	}
	if(a.x < b.x){
		cisloX = b.x - a.x;
		return cisloX/2+a.x;
	}

}

int stredUseckyY(struct bod a, struct bod b){
	int cisloY, stredY;
	if(a.y > b.y){
		cisloY = a.y - b.y;
		return cisloY/2+b.y;
	}
	if(a.y < b.y){
		cisloY = b.y - a.y;
		return cisloY/2+a.y;
	}
	
}
