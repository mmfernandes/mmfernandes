#include <stdio.h>
#include<stdlib.h>

float media(float notas_A[],int n)
{
	int i=0;
	float m=0.0;
	
	for(i=0;i<n;i++)
	{
		m= m+notas_A[i];
	}
	m = m/n;
	return m; 
}
int main()
{
	float media_turma;
	int i,N;
	
	printf("\nFavor informar o número de alunos: ");
	scanf("%i", &N);
	float notas[N];
	
	for(i=0; i<N; i++)
	{
		printf("\nDigite a nota do %d aluno: ", i+1);
		scanf("%f", &notas[i]);
	}
	
	media_turma=media(notas,N); 
	printf("A media da turma e %.2f\n", media_turma); 
	system("Pause");
	return 0;
}
