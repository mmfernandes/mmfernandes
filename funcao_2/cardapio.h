#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h> 

int menu()
{
	int escolha; 
	printf("\n Nosso menu foi criado especialmente para você que gosta de jogos e animes, caso você seja leigo no assunto, digite 1 e você será levado para um ótimo guia, caso seja um mestre neste ramo, digite 2.\n")
	scanf(" %c", op);
	
	do
	{
		printf("\n|||||||||||||||||||||||||||||||||||||||||||||||");
		printf("\n [1] Para ver nossas opções de DRINKS! ");
		printf("\n [2] Para ver nossas opções de HAMBURGUERS"); 
		printf("\n [3] Para ver nossas opções de SOBREMESAS"); 
		printf("\n [4] Temos outros tipos de comida, veja."); 
		scanf("%i",&escolha); 
		
	}while ((escolha<1) || (escolha>4)); 
	return escolha 
}; 

float drinks()
{
	int drink = 0, quant = 0;
	float precoD = 0, t = 0;
	
	printf("\n|||||||||||||||||||||||||||||||||||||||||||||||");
	printf("\n [1] Veigar = 8.90 \n");
	printf("\n [2] Trevor = 8.90 \n");
	printf("\n [3] Ace    = 9.10 \n");
	printf("\n [4] Ahri   = 9.50 \n");
	printf("\n|||||||||||||||||||||||||||||||||||||||||||||||");
	scanf("%i", &drink); 
	
	switch (drink)
	{
		case 1:
			predoD = 8.90; 
		break; 
		
		case 2:
			precoD = 8.90;
		break; 
		
		case 3:
			precoD = 9.10;
		break; 
		
		case 4:
			precoD = 9.50; 
		break; 
	}
	
	printf("\nInforme a quantidade desejada: "); 
	scanf("%i", &quant); 
	precoD = precoD*quant; 
	
	return precoD; 
