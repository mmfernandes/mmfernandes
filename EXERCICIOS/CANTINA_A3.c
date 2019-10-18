#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main()
{
	int quant, n_pedido;
	float v_total, preco;
	char resp= 's',op;
	
	printf("Seja bem-vindo(a) a Cantina Da ZeZé, deseja começar seu pedido? ");
	printf("Seja bem-vindo(a) a Cantina Da ZeZé, deseja começar seu pedido? ");
	scanf("%c", &resp);
	while (resp=='s'|| resp=='S') 
	{
	
		printf("\n ÁGUA MINERAL COM GÁS  = 2.50 [1] \n");
		printf("\n PÃO DE QUEIJO MINEIRO = 3.00 [2]	\n");
		printf("\n ALFAJOR DA ARGENTINA  = 5.00 [3]	\n");
		printf("\n SANDUÍCHE NATURAL     = 7.00 [4]	\n");
		
		printf("Informe a opção desejada");
		scanf("%s", &op);
		
			switch (op)
				{
				case 1:
					preco = 2.50;
					break;
				case 2: 
					preco = 3.00;
					break;
				case 3: 
					preco = 5.00;
					break; 
				case 4: 
					preco = 7.00; 
				
				}
	
		printf("Digite a quantidade");
		scanf("%d", &quant); 
	
		v_total += (quant * preco); 
		
		
		printf("Deseja comprar mais alguma coisa? \n");
		scanf("%c", &resp); 
		
		v_total += (quant * preco); 
	getche(); 
}

}
