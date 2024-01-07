#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int cislo_A=10;
	int cislo_B=3;
	printf("%d", cislo_A/cislo_B);
	printf("\n");
	
	//toto je podstatne pre pretipovanie
	printf("%f", (float)cislo_A/(float)cislo_B);
	
	
	printf("\n");
	printf("%.3f", (float)cislo_A/cislo_B);

	
	char a = "Ahoj";
	printf("\n\n%d", sizeof(a));
	
	float b = 8;
	printf("\n%d ", sizeof(b));
	
	double c = 8;
	printf("\n%d ", sizeof(c));
	
	
	int d = 8;
	printf("\n%d ", sizeof(d));
	
	
	return 0;
}
