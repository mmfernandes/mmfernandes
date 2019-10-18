#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	int mat[4][5];
	int  i,j, total_vendas=0,vendas_trimestre; 
	
	
	printf("________________________________________________________________________________________________________________");
	printf("\nRegião [1] = Norte\nRegião [2] = Nordeste\nRegião [3] = Sul\nRegião [4] = Sudeste\nRegião [5] = Centro-Oeste\n");
	
	for(j=0;j<4;j++)
	
		{	
		vendas_trimestre=0;
		for(i=0;i<5;i++)
			{
		
			printf("________________________________________________________________________________________________________________");
			printf("\nQual a quantidade vendida na região %i, no %i trimestre?: ",i+1,j+1);
			scanf("%d", &mat[j][i]); 
			
			vendas_trimestre+= mat[j][i];
		
			} 
			
		printf("\nTotal de vendas do %iº trimestre é de:%d \n",j+1,vendas_trimestre);
		total_vendas+=vendas_trimestre; 	
		
		}
		for(i=0;i<5;i++)
		{
			vendas_trimestre=0;
			for(j=0;j<4;j++)
			{
				vendas_trimestre+=mat[j][i]; 
			}
		printf("\nTotal de vendas da %iº região é:%d \n",i+1,vendas_trimestre);
		}
		printf("\nO total de vendas em todo país é %d\n: ",total_vendas);
	system("pause");
	
}
