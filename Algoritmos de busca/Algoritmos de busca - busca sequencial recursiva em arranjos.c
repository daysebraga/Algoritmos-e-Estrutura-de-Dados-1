/*Implemente uma função que receba, pelo menos, uma chave e um vetor do tipo inteiro. A função deverá efetuar, utilizando recursão, busca sequencial em vetores.

Input Format

Na primeira linha deve ser lido o tamanho do vetor.

Na segunda linha devem ser lidos os elementos do vetor.

Na terceira linha deve ser lido o número de casos de teste (quantidade de chaves que deverão ser procuradas).

A partir da próxima linha, as chaves que serão procuradas devem ser lidas.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int busca_rec(int vet[],int n,int k,int i){
    
    if(k==vet[i] && i<n)
        return i;
    else if(i<n)
        return busca_rec(vet,n,k,i+1);
    else 
        return -1;
                
}

int main(){
    
    int x,n,i,k,result;
    
    scanf("%d",&n);
    
    int vet[n];
    
    for(i=0;i<n;i++)
        scanf("%d",&vet[i]);
    
    scanf("%d",&x);
    
    
    for(i=0;i<x;i++){
        scanf("%d",&k);
        result=busca_rec(vet,n,k,0);
        printf("%d \n",result);
    }
    
    return 0;
}
