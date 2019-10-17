#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	int mat[5][3];
	int media,nota,j,i,aluno; 
	
	for(i=0; i<3; i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nDigite a %iº nota do %iº aluno: ", j+1, i+1);
			scanf("%d", &mat[i][j]); 
			
			media = media + mat[i][j]/3; 	
			
		}
		
	
	printf("\nA lista de média é %d\n", media);	
	}
	
		system("pause"); 
	
	
	
	
}









// somo e media /3 

