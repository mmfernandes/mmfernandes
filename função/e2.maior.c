#include<stdio.h>
int maior(int v1, int v2, int v3)
	{
	int result=0.0;
	result= v1+v2+v3; 
	return result;
	
	if(v1>v2 && v1>v3)
	{
	printf("%i É o maior número",v1);		
	}
	
	}
	if (v2>v1 && v2>v3)
	{
	printf("%i é o maior número",v2);
	}
	
	if(v3>v1 && v3>v2)
	{
	printf("%i É o maior número",v3);
	}
		/
   }
				
int main()
{
	int maior,v1,v2,v3;
	
	//for (i=0;i<=3;i++)
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &v1);
	
	printf("Digite o segundo valor: ");
	scanf("%d",v2);
	
	printf("Digite o terceiro valor: ");
	scanf("%d",v3); 
	
	printf("O maior valor é %d: ",maior);	
	
	
	
	
}
