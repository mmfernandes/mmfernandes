#include <stdio.h>
#include <conio.h>

int main()
{

	int vida, idade; 

	
	printf("Quantos anos voc� tem?");
	scanf ("%i",&idade);
	
	vida=(idade * 365); 
	printf("Voc� viveu  %i dias", vida, idade);
	
	getch();
}
