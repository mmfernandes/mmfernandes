#include<stdio.h>
float area_quadrado(float lado)
	{
	float result= 0.0;
	result = (lado*lado);
	return result;
	}

float area_triang_ret(float lado1,float lado2)
	{	
	float result=0.0;
	result = (lado1*lado2)/2;
	return result;
	}

int main ()
{	int opcao;
	float lado,lado1,lado2,area=0; 
	printf("Cálculo de áreas. \n");
	printf("0 - Área de um quadrado.\n");
	printf("1 - Área de um Trângulo Ret\n");
	printf("Informe sua opção: ");
	scanf("%d",&opcao);
	
	switch(opcao)
	{
		case 0:
		{ printf("Informe o valor do lado: \n");
		scanf("%f", &lado);
		
		area = area_quadrado(lado);
			
		}break; 
				
		case 1:
		{ printf("Informe o valor do primeiro lado: \n");
			scanf("%f", &lado1);
		printf("Informe o valor do segundo lado: \n");
		scanf("%f", &lado2);
		
		area= area_triang_ret(lado1,lado1);
		
		}break;
		
		default:
		{
			printf("Opção Inválida\n");		
		}					
	}
	
	printf("O cálculo da área é de: %.2f\n", area);
	return 0; 
}

