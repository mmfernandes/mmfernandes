#include <stdio.h>
#include<stdlib.h>
#include <conio.h>
#include <locale.h>

int main()
{

	float valor, peso ,grama; 
	
	printf(" Livre = 39.90 [l]\nPor KG = 4.10 a cada 100g [k]"); 
	char  resp='l'; 
	printf("\nDigite a sua opção. "); 
	scanf (" %c", &resp); 
	while (resp=='l'|| resp=='L')
	{
		valor= 39.90;
		printf("\nO valor á pagar é R$:%.2f", valor);
	}
	if(resp=='k')
	{
	
	printf("\nDigite o peso: ",peso);
	scanf("$f", &peso); 
	
		 valor = grama * peso;
		 
	printf("\nO valor á pagar é R$:%.2f", valor); 	
 }
} 
	







