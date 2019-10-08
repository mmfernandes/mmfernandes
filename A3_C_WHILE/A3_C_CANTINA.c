#include <stdio.h>
#include <conio.h>
int main()
{
	int quant, n_pedido
	float v_total, preco;
	char resp= 's',op
	
	printf("Seja bem-vindo(a) a Cantina Da ZeZé, deseja começar seu pedido? ")
	scanf("%c", &resp);
	while (resp=='s'|| resp=='S') {
	
		prinf("\n ÁGUA MINERAL COM GÁS  = 2.50 [1] \n")
		prinf("\n PÃO DE QUEIJO MINEIRO = 3.00 [2]\n")
		prinf("\n ALFAJOR DA ARGENTINA  = 2.50 [3]\n")
		prinf("\n SANDUÍCHE NATURAL     = 2.50 [4]\n")	
		
		printf("Informe a opção desejada");
		scanf("%s", &op);
		
	switch (op)
	{
		case 1:
			preco = 2.50
		break
		case 2: 
		
			
	}
	

	

	printf("Digite a quantidade");
	scanf("%d", &quant); 
	
	v_total = quant * preco; 
	
	printf("Deseja comprar mais alguma coisa?")
	scanf("%c", &resp); 
	
	}
	
}
