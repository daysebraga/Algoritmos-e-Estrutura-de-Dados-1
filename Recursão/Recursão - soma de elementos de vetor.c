/*Implemente uma função recursiva que retorne a soma de todos os elementos de um vetor.

Input Format

Na primeira linha, ler o tamanho do vetor.

Na segunda linha, ler os elementos do vetor.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int soma_elem_vetor(int vet[],int n,int i){
   
    if(i<n){
        return vet[i] + soma_elem_vetor(vet,n,i+1);
    }
    else 
        return 0;
}
int main() {

    int n,i,resul;
    
        scanf("%d",&n);
    int vet[n];
    
    for(i=0;i<n;i++){ 
        scanf("%d",&vet[i]);
    }
    resul=soma_elem_vetor(vet,n,0);
    printf("%d",resul);
    return 0;
}
