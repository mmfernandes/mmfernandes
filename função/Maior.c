#include <stdio.h>
int Maior (int v1,int v2,int v3)
	{ 
	if((v1>=v2)&&(v1>=v3))
	{	
		{
		return v1;
		}
	}
	else
	{
	if((v2>=v1) && (v2>=v3))
		{
			return v2;
		}
		else
			{
			return v3; 
			}
	}
}

int main()
{
	int result,v1,v2,v3;
	
	//for (i=0;i<=3;i++)
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &v1);
	
	printf("Digite o segundo valor: ");
	scanf("%d",&v2);
	
	printf("Digite o terceiro valor: ");
	scanf("%d",&v3); 
	
	printf("O maior valor é %d: ", Maior(v1,v2,v3));	
	
	
	
	
}

