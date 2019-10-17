#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	int mat[4][5];
	int  i,j,quant, total_vendas,vendas; 
	
	printf("________________________________________________________________________________________________________________");
	printf("\nRegião [1] = Norte\nRegião [2] = Nordeste\nRegião [3] = Sul\nRegião [4] = Sudeste\nRegião [5] = Centro-Oeste\n");
	
	for(j=0;j<4;j++)
		{	
		for(i=0;i<5;i++)
			{
		
			printf("________________________________________________________________________________________________________________");
			printf("\nQual a quantidade vendida na região %i, no %i trimestre?: ",i+1,j+1);
			scanf("%d", &mat[j][i]); 
		
		//quantidade de vendas da região**
			printf("\nTotal de vendas da região %i no %iº trimestres é de:%d \n",i+1,j+1,vendas);
			
			vendas+= vendas + mat[j][i];
			quant += quant + mat[j][i]; 
		////////////////////////////
			} 
			
		
	total_vendas=total_vendas+quant; 
		
	printf("\nO total de vendas em todo país é %d\n: ",total_vendas);
	scanf("%d", &total_vendas);  
		
		}
	
	
}
