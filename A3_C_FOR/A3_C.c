#include <stdio.h>
#include <conio.h>

	int main ()
{
	int i, valor, valor_t=0; 
	for (i=1; i<=5;i++)
	{
	printf("Digite os cinco valores que deseja somar: \n");
	scanf("%d", &valor);
	
	valor_t = (valor_t+valor ); 
	}
	printf("A soma total é de %d", valor_t);
	getch();
}
	
	
