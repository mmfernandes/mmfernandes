#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h> 

int main()
{
	int i;
	float preco_produto, valor_compra,valor_imposto;
	
		for(i=0;i<10;i++)
		{
			printf("\nInforme o pre�o do produto %i: ", i+1); 
			scanf("%f", &preco_produto);
		
			valor_compra=valor_compra+preco_produto; 
			valor_imposto=(0.78/100)*valor_compra;
		}
		
	printf("\nO valor da sua compra � de: %.2f", valor_compra); 
	printf("\nO valor do imposto � de: %.2f", valor_imposto); 
		
	valor_imposto=(0.78/100)*valor_compra; 
		


getche(); 

}
