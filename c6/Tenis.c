#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <locale.h>
#include "trabalhobib.h"

//A ideia é que o funcionário possa cadastrar,verificar,ativar,desativar,consultar e listar os clientes, a partir dai segue a ideia. 

int main()
{
	char op, cadastro_cliente; 
	//struct cadastro_c[];
	
	printf("\nSeja bem-vindo(a)! O que gostaria de fazer? ",op); 
	//printf("\n");
	printf("\n [1] Cadastrar Novo Cliente\n");
	printf("\n [2] Verificar Status do Cliente \n"); 
	printf("\n [3] Consultar Cliente\n"); 
	printf("\n [4] Listar Novos Clientes\n"); 
	printf("\n [5] Desativar Cliente\n"); 
	printf("\n [6] Reativar Cliente\n"); 
	printf("\n Digite a opção desejada: "); 
	 
	scanf(" %s", &op); 
	
	switch (op)
	{
		case 1:
			system ("color f5");
			cadastro_cliente = cadastro_c();
		break; 
	}
}

