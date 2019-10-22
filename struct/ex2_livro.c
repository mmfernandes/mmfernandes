#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <stdio.h> 

struct livro
{
	char titulo[60], area[10];
	int ano_ed, n_pg;
	float pc;
};

int main()
	{
		struct livro l[5];
		int i;
		float media_pagina; 
		
		for(i=0;i<2;i++)
		
		{
			printf("\nQual o título do livro %iº?  ", i+1); 
			fflush(stdin); 
			gets(l[i].titulo);
			
			printf("\nQual a Área do livro? ");
			fflush(stdin);
			gets(l[i].area);
			
			printf("\nQual o ano de edição? ");
			scanf(" %d", &l[i].ano_ed); 
			
			printf("\nQuantas páginas tem? ");
			scanf("%d", &l[i].n_pg);
			
			printf("\nQual o preco? ");
			scanf("%f", &l[i].pc); 
			
			printf("*********************************************");
			
			media_pagina=(l[i].n_pg+l[i].n_pg)/5; 
		} 
			printf("*********************************************"); 
			printf("\nA média do número de páginas DOS livros é %.2f:\n ", media_pagina);
			printf("*********************************************");  
			
			//for(i=0;i<5;i++)
			//{
			//	printf("Digite ")
			//}
		
		
	}
