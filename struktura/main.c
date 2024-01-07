#include <stdio.h>
#include <stdlib.h>

struct zamestnanec{
		char meno[20];
		char priezvisko[50];
		int vek;
		char pohlavie;
		float plat;
		int oduceneRoky;
	};

struct bod{
	int x;
	int y;
};

struct zamestnanec vacsiPlat(struct zamestnanec a, struct zamestnanec b);
struct zamestnanec vyssiVek(struct zamestnanec a, struct zamestnanec b);
struct zamestnanec viacOducenychRokov(struct zamestnanec a, struct zamestnanec b);

struct bod vzdialenostZaciatok(struct bod a);
int vzdialenostDvochBodov(struct bod a, struct bod b);
struct bod stredPriamky(struct bod a, struct bod b);

int main(int argc, char *argv[]) {
	

	
	
	struct zamestnanec riaditel = {"Juraj", "Mucha", 50, 'M', 1800, 14};
	struct zamestnanec zastupca = {"Richard", "Bledy", 24, 'M', 1400, 4};
	
	struct zamestnanec zam = vacsiPlat(riaditel, zastupca);
	struct zamestnanec klm = vyssiVek(riaditel, zastupca);
	struct zamestnanec dlc = viacOducenychRokov(riaditel, zastupca);
	
	printf("\npohlavie riaditela: %c ", riaditel.pohlavie);

	printf("\nVacsi plat ma: %s: %.2f", zam.priezvisko, zam.plat);
	printf("\nVyssi vek ma: %s: %d rokov",klm.priezvisko, klm.vek);
	printf("\nViac oducennych rokov ma: %s: %d rokov",dlc.priezvisko, dlc.oduceneRoky);
	
	
	struct bod a={25,50};
	struct bod s={15,70};
	struct bod b={10,90};
	
	struct bod uloha1 = vzdialenostZaciatok(a);

	
	
	printf("\nVzdialenost od zaciatku je : x: %d, y:%d",uloha1.x,uloha1.y);
	printf("\nVzdialenost dvoch bodov od seba je : x: %d",vzdialenostDvochBodov(a,b));
	
	
	
	
	
	return 0;
}

struct zamestnanec vacsiPlat(struct zamestnanec a, struct zamestnanec b){
	if(a.plat >= b.plat) return a;
	else return b;
}

struct zamestnanec vyssiVek(struct zamestnanec a, struct zamestnanec b){
	
	if(a.vek>= b.vek)return a;
	else return b;
}

struct zamestnanec viacOducenychRokov(struct zamestnanec a, struct zamestnanec b){
	
	if(a.oduceneRoky>= b.oduceneRoky)return a;
	else return b;
}

struct bod vzdialenostZaciatok(struct bod a){
	return a;
}

int vzdialenostDvochBodov(struct bod a, struct bod b){

	int c1,c2;
	
	if(a.x>b.x){
		
		c1 = a.x-b.x;
		
	
	}else{
		 
		c1 = b.x-a.x;
		
	}
	
	if(a.y>b.y){
		
		c2 = a.y-b.y;
	   
	
}else{
	
	c2= b.y-a.y;
	
}
	return c1,c2;

}
