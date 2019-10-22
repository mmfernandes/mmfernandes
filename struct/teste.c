#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>

struct pessoa
{
	char nome[50],rua[50];
	int idade, n_casa
};

int main()
{
	struct pessoa p[4]; 
	int i; 
	for(i=1;i<5;i++)
	{
		
		printf("Favor informar os dados da %i pessoa:\n\n",i);
		printf("Nome da %i pessoa? \n",i); 
		fflush(stdin); 
		gets(p[i].nome); 
		
		printf("Qual a idade da %i pessoa? \n",i);
		scanf("%d",&p[i].idade); 
		
		printf("Qual nome rua da pessoa %i?\n", i); 
		fflush(stdin); 
		gets(p[i].rua); 
		
		printf("Qual numero da casa da %i pessoa?\n",i); 
		scanf("%d",&p[i].n_casa); 
		 
	}
	
		for(i=1;i<5;i++)
		{
			printf("________________________________________");
			printf("\nNome:%s\nIdade:%i\nRua:%s\nN-Casa:%i\n",p[i].nome,p[i].idade,p[i].rua,p[i].n_casa); 
			printf("________________________________________");
		}
}
