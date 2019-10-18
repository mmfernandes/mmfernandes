#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	int dia; 
	float preco_entrada,desconto=0.25; 
	char resp='s'; 

	printf("\n1| DOMINGO\n 2| SEGUNDA\n 3| TERÇA\n 4| QUARTA\n 5| QUINTA\n 6| SEXTA\n7| SABADO\n");
	printf("***********************************************************************************************************************"); 
	printf("\nQual valor da entrada? ");
	scanf("%f", &preco_entrada);
	printf("\nQual o dia de hoje? ");
	scanf("%i", &dia); 
	
	switch(dia)
	{	case 1:
			preco_entrada=preco_entrada;
		break;
		
		case 2:
			preco_entrada = ((25*preco_entrada) /100) -preco_entrada; 
		break;
		
		case 3:
		preco_entrada = ((25*preco_entrada) /100) -preco_entrada; 
		break;
		
		case 4:
				preco_entrada=preco_entrada;		 
		break;
		
		case 5:
			preco_entrada = ((25*preco_entrada) /100) -preco_entrada; 
		break;	
		
		case 6:
			preco_entrada=preco_entrada;
		break;
		
		case 7:
			preco_entrada=preco_entrada;
		break;
	
	}
	
	printf("\nHoje tem música ao vivo? "); 
	scanf(" %c", &resp); 
	if(resp=='s')
	{
		preco_entrada= ((preco_entrada*15)/100) + preco_entrada; 
		printf("\nO valor da sua entrada ficou: %.2f", preco_entrada);
	}
	
	printf("\nO valor final da sua entrada ficou: %.2f", preco_entrada);	
	
	
	
	getche(); 
}
