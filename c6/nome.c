#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <locale.h>
#include "bibmay.h"

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	SetConsoleOutPutCP (28591); //escrita latina
	SetConsoleCP(28591); //acentuação
	
	int i, N=0;
	char vet[N][40]; 
	
	printf("Quantas pessoas você deseja listar? %d", N); 
	scanf("%d", &N); 
	
	for (i=0; i<N; i++)
	{
		printf("Favor insira o nome da %i pessoa ", i+1);
		gets(vet[i]);
	}
	
	bubleS(vet, N);
	printf("\nOs nomes ordenados são: ");
	 
	for (i=0; i < N; i++)
	{
		printf("%s\n", vet[i]);
	}
}
