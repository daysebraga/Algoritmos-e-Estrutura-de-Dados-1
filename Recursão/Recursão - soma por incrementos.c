/*A soma de dois números inteiros pode ser feita através de sucessivos incrementos, por exemplo, 7 + 4 = (++(++(++(++7)))) = 11. Implemente uma função que calcule a soma entre dois números naturais, através de incrementos, utilizando recursão.

Input Format

Na primeira linha deve ser lido um número inteiro N referente a quantidade de leituras de entradas.

Para cada uma das N próximas linhas, ler dois números inteiros (a e b)*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int soma_rec(int a,int b){
    
    if(b==1)
        return a + 1;
    else
        return 1 + soma_rec(a,b-1);
}
int main() {
    int n,i,a,b;
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        
      scanf("%d %d",&a,&b); 
    printf("%d\n",soma_rec(a,b));   
        
    }     
    return 0;
}
