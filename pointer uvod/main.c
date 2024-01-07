#include <stdio.h>
#include <stdlib.h>


int main() {
	/*
	int a = 10, *pointer;
	
	pointer = &a;
	
	
	
	
	printf("%d", &a);//vypise miesto v pamati
	
	printf("\n%d", a);//vypise cislo
	
	printf("\na= %d na adrese= &d",a,&a);
	
	printf("\np = %p a = %d  idk = %d", pointer, *pointer, &pointer);

	// & - referencny operator pomocou ktoreho ziskame adresu premennej
	
	// do pointerov ukladame pamatove miesto nie cislo premennej 
	
	*/
	
	short a = 10;
	short *ptr = &a;
	short b = *ptr;
	int d = ptr;
	
	
	printf("\n%d  %p", *ptr, ptr);
	printf("\n b = %d ", b);
	printf("\n d = %d", d);
	return 0;
}