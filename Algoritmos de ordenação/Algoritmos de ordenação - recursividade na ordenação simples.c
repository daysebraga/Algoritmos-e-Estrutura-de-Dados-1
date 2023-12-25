/*Implemente, utilizando recursão, um dos algoritmos de ordenação simples apresentados em sala de aula (bublesort, selection sort ou insertion sort).

Input Format

Na primeira linha deve ser lido o tamanho do vetor. Na segunda linha devem ser lidos os elementos do vetor.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ordena(int v[],int num,int j){
    int aux;
    int i;
    
    for(i=0;i<num-1;i++){
        if(v[i]>v[i+1]){
            aux=v[i];
            v[i]=v[i+1];
            v[i+1]=aux;
        }
    }
    if(j < num)
        ordena(v,num,j+1);
}

int main() {

    int num,i;
        scanf("%d",&num);
    int v[num];
    
    for(i=0;i<num;i++)
        scanf("%d",&v[i]);
    
    ordena(v, num, 0);

    
    
    for(int i = 0; i < num; i++)
        printf("%d ", v[i]);
        


    return 0;
}
