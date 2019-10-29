#include <stdio.h>
#include <stdlib.h>

void pinheiro(int base){
    int i, j, k;

    for(i=1; i<=base; i++)
    {
        for(k=base-i; k>=1; k--)  { 
            printf(" ");
        }
        for (j=i;j>=1;j--)  { 
            printf("* ");
        }
        printf("\r\n"); 
    }  
}

int main()
{
    int base;
    
    printf("Introduza a base: ");
    scanf("%d", &base);
    
    pinheiro(base);
    
    return 0;
}
