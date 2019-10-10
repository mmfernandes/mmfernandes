#include<stdio.h>
#include<conio.h>


int main()
{
	
	int i, quant;
	float preco[20], faturamento;
	
	for(i=0; i<20; i++)
		 { 
	
	printf("Qual a quantidade de venda do mês? ");
	scanf("%i", &quant); 
	
	printf("Qual valor da mercadoria? "); 
	scanf("%f", &preco[i]); 
			 
			 faturamento += preco[i] * quant; 
	
		 }

		printf("O Faturamento é de %.2f", faturamento); 
		system
// o rand povoa o vetor x com valores inferiores a y 		

}
