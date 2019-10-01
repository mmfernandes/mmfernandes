#include <stdio.h>
#include <conio.h>
int main(){
	
	float nota1, nota2, media; 
	
	printf("Digite a primeira nota:\n");
	scanf ("%f", &nota1);
	printf("Informe a segunda nota: \n");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2)/2;
	
	if (media>=7)
		printf("Aluno APROVADO! \nMedia final: %.2f", media);
	else 
		printf("Aluno REPROVADO \nMedia final: %.2f", media); 
		
	getch(); 
	
}
