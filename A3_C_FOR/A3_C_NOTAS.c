#include <stdio.h>
#include <conio.h>


	int main ()
{
	int nota_s, nota_t, nota_p, aluno, media,i;
	printf("Qual a quantidade de alunos?");
	scanf("%d", &aluno);
	for (i=1; i<=aluno;i++)
	{
		printf("Nota do Trabalho do %i aluno\n",i);
		scanf("%d", &nota_t);
		
		printf("Nota do Seminário do %i aluno\n",i);
		scanf("%d", &nota_s);
		
		printf("Nota da Prova do %i aluno\n",i);
		scanf ("%d", &nota_p); 
		
		media = (nota_t*20+nota_s*30+nota_p*50) / 100;	
		printf("Media do aluno %i é: %d \n", i, media);  
		system("pause"); 
		system("cls"); 
		system("pause"); 
		
	
	}
	
	
	getche();
}
