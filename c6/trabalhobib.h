#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <locale.h>

// Cadastro Cliente 
struct cadastro_c
{
	char nome_cliente[70];
	char endr[70];
	char cidade[40];
	float cpf;
	float rg;
	int idade;
}; 

void cadastro(struct cadastro_c c[])
{
	int i; 
	//struct cadastro c[i];
	
	printf("\nQual o nome completo do cliente? %s ", c[i].nome_cliente);
	
	printf("\nQual o endereço? %s ", c[i].endr);
	
	//printf("\nQual a cidade? %s ", c.[i].cidade);
	
	printf("\nCPF: %f ", c[i].cpf);
	
	printf("\nRG:  &f ", c[i].rg);
	
	printf("\nQual idade %d ", c[i].idade);
}
