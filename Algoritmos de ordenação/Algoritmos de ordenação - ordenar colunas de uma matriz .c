/*Implemente uma função que receba uma matriz de números reais. A função deverá ordenar, em ordem decrescente, cada coluna da matriz.

Input Format

Na primeira linha, devem ser lidos dois números inteiros: l (linhas) e c (colunas).

Para cada uma das l linhas seguintes devem ser lidos c números inteiros.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void ordenamatriz(float **m,int tam,int tam2){
    int i,j,k;
    float aux;
    
    for(i=0;i<tam2;i++){ 
        for(j=0;j<=tam-1;j++){
            for(k=0;k<tam2-1-j;k++){
               if(m[k][i] < m[k+1][i]){
                    aux=m[k][i];
                    m[k][i]=m[k+1][i];
                    m[k+1][i]=aux;
                }
            }
        }
    }
}
int main() {
    int i, j;
    int tam, tam2;
    
    scanf("%d %d", &tam, &tam2);

    float **m = (float**)malloc(sizeof(float*) * tam);
    for(int i = 0; i < tam; i++)
        m[i] = (float*)malloc(sizeof(float) * tam2);
    
    for(i = 0; i < tam; i++){
        for(j = 0; j < tam2; j++)
            scanf("%f", &m[i][j]);
    }
    
    ordenamatriz(m,tam,tam2);
    
    for(i=0;i<tam;i++){
        for(j=0;j<tam2;j++)
            printf("%.1f ",m[i][j]);
        printf("\n");
    }
    free(m);
    return 0;
}
