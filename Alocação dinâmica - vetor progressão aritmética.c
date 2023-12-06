/*Implemente uma função que receba dois números inteiros, sendo uma para o tamanho do vetor (n) e a outra para razão (r).
A função deverá retornar um vetor de tamanho n ordenado de forma crescente representado uma sequência de elementos de uma progressão aritmética iniciada por 0.

Para a implementação da solução, considere o protótipo de função abaixo:

int * prog_arit(int n, int r);
Input Format

Na primeira linha devem ser lidos dois números inteiros, sendo o primeiro referente ao tamanho do vetor e o segundo, à razão da progressão aritmética.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int * prog_arit(int n, int r){ 
    int *tx;
    int i;
    int aux;
    
    tx= (int*) malloc(n * sizeof(int)); 
    
    for(i=0;i<n;i++){
        
        aux=i*r;
        tx[i]=aux;
        
        aux=0;
    }
    return tx;
}
int main() {
    int n ;
    int r;
    int *j;
    int i;
    
    scanf("%d %d",&n,&r);
    
   j=prog_arit(n,r);
    
    for(i=0;i<n;i++)
    printf("%d ",j[i]);
    
     free(j); 
    return 0;
}
