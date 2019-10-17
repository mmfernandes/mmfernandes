#include <stdio.h>
#include <conio.h>

int main(){
	
	int mat[3][3]; 
	int i,j,soma; 
	
		for(i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{ 
		
		printf("\nDigite os valores mat[%d][%d]: ",i+1,j+1);
		scanf("%i", &mat[i][j]);
		
		soma= soma + mat[i][j]; 
 			
		}
	printf("A soma é %d\n", soma);
	}
	
	system("pause"); 
	
	
	
	
	
	
	
	
	
	
	
}
