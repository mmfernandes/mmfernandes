#include <locale.h>
#include <stdlib.h>
#include "bibmay.h"

int main()
{
	int n=5; 
	int vet[n], i,num;
	
	for (i=0; i<n; i++)
	{
		printf("Favor insira a %i idade ", i+1);
		scanf("%d", &vet[i]);
	}
	
	buble(vet,n);
	printf("\nOs valores ordenados são: ");
	 
	for (i=0; i<n; i++){
		printf("\n %d", vet[i]);
	}
}


