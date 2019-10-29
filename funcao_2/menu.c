#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include "cardapio.h"

int main()
{
	int op;
	char resp;
	float valor1,valor2,valor,valor4; 
	
	op = menu(); 
	
	switch (op)
	
	{
		case 1:
			system("color f5"); 
			valor1= drinks();
			printf("\nVocê deve pagar R$: %0.2f\n\n"); 
		break; 
		
		case 2:
			system("color f3");
			valor2=hamburguer();
			printf("\nVocê deve pagar R$: %0.2f\n\n");
		break;
		
		case 3:
			system("color f5");
			valor3=sobremesa(); 
			printf("\nVocê deve pagar R$: %0.2f\n\n");
		break;
		
		case 4:
			system("color f3");
			valor4=outros(); 
			printf("\nVocê deve pagar R$: %0.2f\n\n"); 
	}
	
	system("pause"); 
}

