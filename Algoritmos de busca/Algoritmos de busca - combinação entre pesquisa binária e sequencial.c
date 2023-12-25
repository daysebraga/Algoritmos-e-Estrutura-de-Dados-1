/*Implemente a função que receba quatro parâmetros: número inteiro a ser procurado, vetor de inteiros (v[] ou *v), tamanho do vetor (n) e um número inteiro representando tamanho mínimo (m). 
  Nessa função, enquanto o espaço de busca (espaço coberto entre os índices esquerdo e direito em uma busca binária, ou seja, direito - esquerdo + 1) 
for maior que m, o método de busca binária deve ser aplicada. Quando o espaço de busca ficar menor ou igual a m, a busca sequencial deverá ser executada. 
  Se a busca sequencial for aplicada, o espaço de busca deverá ser impresso (caso houver). Ao final a posição do item procurado no vetor é retornada. 
Caso o item não seja encontrado, a função deverá retornar -1.

Input Format

Na primeira linha deve ser lido um número inteiro que deverá ser procurado. Na segunda linha deve ser lido o tamanho do vetor. 
  Na terceira devem ser lidos os elementos do vetor. Na quarta linha deve ser lida o tamanho mínimo da partição (m) para fazer a busca binária.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int busca(int num,int v[],int n,int parte){
    
    int i,j,meio,ini=0,fim=n-1;
    
    while(fim-ini+1>parte){
        
        if(ini==fim && v[ini]==num){
            return ini;
        }
        else if(ini<fim){
            meio=(ini+fim)/2;
            
            if(v[meio]==num)
                return meio;
            
            else if(num<v[meio])
                fim=meio-1;
            else
                ini=meio+1;
        }
        else 
            return -1;  
    }
    for(j=ini;j<=fim;j++)
        printf("%d ",v[j]);
    printf("\n");
    for(i=0;i<n;i++){
        
        if(v[i]==num)
            return i;        
    }
        return -1;
        
}
int main() {

    int num, n, parte,i;
    
    
        scanf("%d",&num);
        scanf("%d",&n);
    
    int v[n];
    
    for(i=0;i<n;i++)
        scanf("%d ",&v[i]);
    
    scanf("%d",&parte);
    
   printf("%d ",busca(num,v,n,parte));
    return 0;
}
