#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <
locale.h>

struct carro
{
	char nome[10], marca[15], cor[10];
	int ano;
	float preco;
};

int main()
{
	int i;
	struct carro c[5];
	
		for(i=0;i<5;i++)
		{
			printf("\nQual o nome do carro? ");
			fflush(stdin);
			gets(c[i].nome);
			
			printf("\nQual a marca do carro?: ");
			fflush(stdin);
			gets(c[i].marca); 
			
			printf("\nQual a cor do carro? ");
			fflush(stdin);
			gets(c[i].cor);
			
			printf("\nQual o ano do carro? ");
			scanf("%d", &c[i].ano);
			
			printf("\nQual o preco do carro? "); 
			scanf("%f", &c[i].preco); 
			
		}
		
		for(i=0;i<5;i++)
		{
				printf("\nCarro: %s\n", c[i].nome); 
				printf("\nMarca: %s\n", c[i].marca);
				printf("\nCor  : %s\n", c[i].cor);
				printf("\nAno  : %d\n", c[i].ano);
				printf("\n*************************\n"); 
					
		
		}
	
	
	
	
	
}
