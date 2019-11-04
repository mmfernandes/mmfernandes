#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h> 

//int Historia()
//{	
//}

int menu()
{
	int escolha;
	
	do
	{
		printf("\n|||||||||||||||||||||||||||||||||||||||||||||||");
		printf("\n [1] Para ver nossas opções de DRINKS! ");
		printf("\n [2] Para ver nossas opções de HAMBURGUERS"); 
		printf("\n [3] Para ver nossas opções de SOBREMESAS"); 
		printf("\n [4] Temos outros tipos de comida, veja.\n"); 
		scanf("%i",&escolha); 
		
	}while ((escolha<1) || (escolha>4)); 
	return escolha;
	
	
}; 

float Drinks()
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
			precoD = 8.90; 
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
	precoD = precoD * quant; 
	
	return precoD; 
};

float Hamburguers()
{	
	int hbg = 0, quant = 0;
	float precoH;

	printf("\n|||||||||||||||||||||||||||||||||||||||||||||||\n"); 
	printf("\n [1] Barão  = 13.80\n"); 
	printf("\n [2] Morgana       = 15.50\n");
	printf("\n [3] Varus  = 15.80\n"); 
	printf("\n [4] Malphite      = 17.50\n");
	printf("\n|||||||||||||||||||||||||||||||||||||||||||||||\n");
	scanf("%i", &hbg); 

	switch(hbg) 
	{
		case 1:
			precoH = 13.80;
		break;

		case 2: 
			precoH = 15.50; 
		break; 

		case 3: 
			precoH = 15.80; 
		break;

		case 4:
			precoH = 17.50; 
		break; 

	}
	printf("\nInforme a quantidade desejada: \n");
	scanf("%i", &quant); 
	precoH = precoH * quant;

	return precoH; 
}; 

float Sobremesas()
{
	int sob=0, quant=0;
	float precoS; 

	printf("\n|||||||||||||||||||||||||||||||||||||||||||||||\n"); 
	printf("\n [1] Ancião   = 10.80\n"); 
	printf("\n [2] Kakashi  = 12.50\n");
	printf("\n [3] Kurama   = 14.80\n"); 
	printf("\n [4] Akatsuco = 16.50\n");
	printf("\n|||||||||||||||||||||||||||||||||||||||||||||||\n");
	scanf("%i", &sob); 

switch(sob) 
	{
		case 1:
			precoS = 10.80;
		break;

		case 2: 
			precoS = 12.50; 
		break; 

		case 3: 
			precoS = 14.80; 
		break;

		case 4:
			precoS = 16.50; 
		break; 

	}

	printf("\nInforme a quantidade desejada: \n");
	scanf("%i", &quant); 
	precoS = precoS * quant;

	return precoS; 

}; 

float Mais()
{
int mais=0, quant=0;
	float precoM; 

	printf("\n|||||||||||||||||||||||||||||||||||||||||||||||\n"); 
	printf("\n [1] Milkshake  = 10.00\n"); 
	printf("\n [2] Porção de batata-frita = 12.50\n");
	printf("\n [3] Kibe       = 4.50\n"); 
	printf("\n [4] Coxinha    = 4.50\n");
	printf("\n|||||||||||||||||||||||||||||||||||||||||||||||\n");
	scanf("%i", &mais); 

switch(mais) 
	{
		case 1:
			precoM = 10.00;
		break;

		case 2: 
			precoM = 12.50; 
		break; 

		case 3: 
			precoM = 4.50; 
		break;

		case 4:
			precoM = 4.50; 
		break; 

	}

	printf("\nInforme a quantidade desejada: \n");
	scanf("%i", &quant); 
	precoM = precoM * quant;

	return precoM; 
}; 
