#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	int mat[4][5];
	int  i,j,quant, total_vendas,vendas; 
	
	printf("________________________________________________________________________________________________________________");
	printf("\nRegi�o [1] = Norte\nRegi�o [2] = Nordeste\nRegi�o [3] = Sul\nRegi�o [4] = Sudeste\nRegi�o [5] = Centro-Oeste\n");
	
	for(j=0;j<4;j++)
		{	
		for(i=0;i<5;i++)
			{
		
			printf("________________________________________________________________________________________________________________");
			printf("\nQual a quantidade vendida na regi�o %i, no %i trimestre?: ",i+1,j+1);
			scanf("%d", &mat[j][i]); 
		
		//quantidade de vendas da regi�o**
			printf("\nTotal de vendas da regi�o %i no %i� trimestres � de:%d \n",i+1,j+1,vendas);
			
			vendas+= vendas + mat[j][i];
			quant += quant + mat[j][i]; 
		////////////////////////////
			} 
			
		
	total_vendas=total_vendas+quant; 
		
	printf("\nO total de vendas em todo pa�s � %d\n: ",total_vendas);
	scanf("%d", &total_vendas);  
		
		}
	
	
}
