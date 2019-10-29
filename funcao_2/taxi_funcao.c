#include <stdio.h> 
float Bandeirada (int op,float qm_rodado)
{

	if(op == 1)
	{
		qm_rodado=(qm_rodado*2.70)+5.40;
		{
			return qm_rodado;
		}
	}
	else 
	{
		if(op == 2)
		{
			qm_rodado=(qm_rodado*3.30)+5.40; 
			{ 
			return qm_rodado;
			}
		}
		
	}
}
int main()
{
	float qm_rodado,preco;
	int op; 
	
	printf("\nBandeira 1 = 6:00 | 20:00\nBandeira 2 = 20:01 | 6:01\n");
	printf("\nQual sua Bandeira? ");
	scanf("%i",&op);
	
	printf("\nInforme o KM rodado: ");
	scanf("%f", &qm_rodado);
	
	preco=Bandeirada(op,qm_rodado);
	
	printf("O valor da tarifa é de %.2f",preco); 
}	

