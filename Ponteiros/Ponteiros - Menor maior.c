/*mplemente uma função que receba duas variáveis fo tipo inteiro e coloque o maior valor na primeira variável e o menor valor na segunda variável.
Escreva o conteúdo das 2 variáveis dentro da função main.

Use o seguinte protótipo de função:

void troca (int *A, int *B);*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void troca(int *a, int *b)
{  
    int aux;
 
    if(*a > *b)
   {
        printf("A=%d B=%d\n",*a,*b);  
   }
    
    if(*b > *a)
    {
        aux= *b;
        *b= *a;
        *a=aux;
        
         printf("A=%d B=%d\n",*a,*b);  
    }
  
}

int main() {

   int num,i,x,y;
    
    scanf("%d",&num);
    
    for(i=0;i<num;i++)
    {  
        scanf("%d",&x);
        scanf("%d",&y);
    
        troca(&x,&y);
        
    } 
    
    return 0;
}
