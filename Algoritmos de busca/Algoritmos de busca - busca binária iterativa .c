/* Implemente a versão iterativa da busca binária.

Input Format

Na primeira linha deve ser lido o tamanho do vetor. Na segunda linha devem ser lidos os elementos do vetor.
  Na terceira linha deve ser lido o número de casos de teste (quantidade de chaves que deverão ser procuradas
A partir da próxima linha, as chaves que serão procuradas devem ser lidas.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int busca(int v[],int num,int x,int ini,int fim){
    int meio;
    if(v[ini]==x && ini==fim)
        return ini;
    
    else if(ini < fim){
        meio=(ini+fim)/2;
        
        if(x==v[meio])
            return meio;
        else if(x<v[meio])
            return busca(v,num,x,ini,meio-1);
        else
            return busca(v,num,x,meio+1,fim);
    }
    else
        return -1;
}
int main() {

    int num,i,j,casos,x;
    scanf("%d",&num);
    int v[num];
    
    for(i=0;i<num;i++)
        scanf("%d ",&v[i]);
    
    scanf("%d",&casos);
    
    for(j=0;j<casos;j++){
        scanf("%d",&x);
        printf("%d\n",busca(v,num,x,0,num-1));
    }
    return 0;
}
