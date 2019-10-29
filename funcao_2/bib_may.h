#include <stdio.h> 
//media salario 

float Media_Sal(int n,float v_sal[])
{
	int i
	float m = 0, soma = 0; 
	
	for(i=0; i<n; i++)
	{
		soma = soma +v_sal[i]; 

		m = soma/n;
	}
	return m; 
}

float Salario(int)



////////////media nota
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
////////////taxi
float Bandeirada (int op,float qm_rodado)
{

	if(op == 1)
	{
		qm_rodado=(qm_rodado*2.70)+5.40;
		{
			return qm_rodado;
		}
	}
	else 
	{
		if(op == 2)
		{
			qm_rodado=(qm_rodado*3.30)+5.40; 
			{ 
			return qm_rodado;
			}
		}
		
	}
}
