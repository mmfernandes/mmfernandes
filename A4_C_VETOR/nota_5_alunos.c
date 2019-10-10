#include <stdio.h>
#include <conio.h>

int main()
 {

	float media, nota[5]; 
	int i;
	
	for (i=1; i<5;i++)
	{
		printf("\n Qual a nota do %iº aluno? ", i);
		scanf ("%f", &nota[i]); 
	 
		media = (nota[i] + media ); 
	
		
	}
	media = media/5; 
	printf("\n A média da turma é %.2f", media); 
	printf("\n Notas acima da média %.2f", nota[i]); 
	for (i=1; i<5; i++)
	{
		if (nota[i]>media){
			
			printf("\n %.2f", nota[i]); 
		}
		
	}
	getch(); 
	return 0; 
}
