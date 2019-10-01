#include <stdio.h>
#include <conio.h>

int main()
	{ 
	char sexo = 'F';
	int idade = 17;
	float altura = 1.78; 
	
	system("COLOR D");
	printf("Escrevendo um caractere na tela %c e escrevendo um inteiro na tela %i e escrevendo um real na tela %.2f:\n", sexo, idade, altura);
	
	getch();
	}
