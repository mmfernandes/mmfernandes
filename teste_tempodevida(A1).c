#include <stdio.h>
#include <conio.h>

int main()
{

	int vida, idade; 

	
	printf("Quantos anos você tem?");
	scanf ("%i",&idade);
	
	vida=(idade * 365); 
	printf("Você viveu  %i dias", vida, idade);
	
	getch();
}
