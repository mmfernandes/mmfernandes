#include <stdio.h>
#include <conio.h>

int main ()
{
	float preco, valor_i=0.78, valor_t; 
	int i;
	for(i=1; i<=10;i++)
	{
	printf("Informe o preco do produto: " );
	scanf("%f", &preco);
	valor_t=preco+valor_t;

	}
	valor_t = (valor_t*(0.78/100));  
	printf("O valor do imposto é %.2f",valor_t);
	
	
}
