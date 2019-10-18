#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h> 

int main ()
{
	
	int
	float op, peso_linguica, preco_linguica;

	
	printf("\n LINGUIÇA TIPO 1: 19,90 O QUILO\n LINGUIÇA TIPO 2: 25,90 O QUILO\n LINGUIÇA TIPO 3: 29,90 O QUILO\n"); 
	printf("\n QUAL O PESO DA LINGUIÇA?", peso_linguica);
	scanf("%f", &peso_linguica); 
	printf("QUAL O TIPO DA LINGUIÇA? ", op);
	scanf(" %f", &op)
	switch(op)
		{
			case 1: 
				preco_linguica= 19.90
			break;
			case 2 :
				preco_linguica=25.90
			break;
			case 3: 
				preco_linguica=29.90
			break; 	
			
		}
	
}
