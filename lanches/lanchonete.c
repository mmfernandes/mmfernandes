#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include "cardapio.h"

int main()
{
	int op;
	char resp;
	float valor1,valor2,valor3,valor4; 
  
//	printf("\n Nosso menu foi criado especialmente para voc� que gosta de jogos e animes, caso voc� seja leigo no assunto digite 1 e voc� ser� levado para um �timo guia, caso seja um mestre neste ramo, digite 2.\n");
//	scanf(" %c", op);
//
//	if (op =='s')
//	
//		resp=Historia(); 
//	else 
	
	op = menu(); 
	
	switch (op)
	
	{
		case 1:
			system("color f5"); 
			valor1= Drinks();
			printf("\nVoc� deve pagar R$: %0.2f\n\n",valor1);
			printf("\Deseja comprar mais alguma coisa?\n"); 
			scanf("%s", &resp); 
			
			if (resp=='s')
			{
				op =menu(); 
			}
			else
			{
				printf("\nVoc� deve pagar R$: %0.2f\n\n",valor1);
			}
			
		break; 
		
		case 2:
			system("color f3");
			valor2=Hamburguers();
			printf("\nVoc� deve pagar R$: %0.2f\n\n",valor2);
		break;
		
		case 3:
			system("color f5");
			valor3=Sobremesas(); 
			printf("\nVoc� deve pagar R$: %0.2f\n\n",valor3);
		break;
		
		case 4:
			system("color f3");
			valor4=Mais(); 
			printf("\nVoc� deve pagar R$: %0.2f\n\n",valor4); 
	}
	
	system("pause"); 

}; 


