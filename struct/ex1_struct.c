#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <stdio.h> 

struct pessoa{
	char nome[70],nmrua[70],estado[2];
	int n_casa,fone,cpf;
};

int main ()
{
	struct pessoa p[2];
	int i;
	printf("SEJA BEM-VINDO(A)\n");
	//system("pause"); 
	
		for(i=0;i<2;i++)
		{
		
		printf("\nDados do %i Cliente\n",i+1);
		printf("\nInforme o nome do cliente: ");
		fflush(stdin); 
		gets(p[i].nome);
			
		printf("\nInforme o nome da rua: "); 
		fflush(stdin); 
		gets(p[i].nmrua); 
		
		printf("\nInforme a SIGLA do seu estado: ");
		fflush(stdin);
		gets(p[i].estado);
		
		printf("\nInforme o numero da casa: "); 
		scanf("%d",&p[i].n_casa);
		
		printf("\nInforme o seu numero de telefone: ");
		scanf("%d",&p[i].fone);
		
		printf("\nInforme o seu CPF: ");
		scanf("%d",&p[i].cpf); 
		
		}
		
		for(i=0;i<2;i++)
		{
			printf("________________________________________");
			printf("\nNome: %s \nNome Rua: %s\n Estado: %s\n Numero Casa: %d\n CPF: %d\n ",p[i].nome,p[i].nmrua,p[i].estado,p[i].n_casa,p[i].cpf); 
			printf("________________________________________");
		}
}

