#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <locale.h>

//BubleSort 

void bubleS(char (*V)[40], int Fim)
{
	int i,j;
	char aux[40]; 
	
	for(i = 1; i< Fim; i++)
	{
		for (j = 0; j < Fim-1; j++)
		{
			if(strcmp(V[j],V[j+1]) > 0)
			{
				strcpy(aux,V[j]); 
				strcpy(V[j], V[j+1]); 
				strcpy(V[j+1],aux); 
			}
		}
	}
}

void buble(int *V, int N)
{
	int i, continua, aux, fim=N;
	do
	{
		continua=0;
		for(i=0; i<fim-1; i++)
		{
			if(V[i]>V[i+1])
			{
			aux = V[i]; 
			V[i] = V[i + 1]; 
			V[i + 1]= aux;
			continua = i; 		
			}
		}
		fim--;
	}
	while(continua!=0); 
	
}

 //Bandeirada Taxi
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
//media nota
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

//Maior

int Maior(int v1, int v2, int v3){
	if((v1>=v2) && (v1>=v3)){
		return v1; 
	}
	else{
		if((v2>=v1) && (v2>=v3)){
		return v2;
		}
		else{
			return v3; 
		}
	}
}
//Quadrado 
int Quadrado (int a){
	int result;
	result = a*a; 
	return result; 
}
//Soma
int Soma (int v1, int v2)
{
	int resp;
	resp = v1 + v2;
	return resp; 
}
