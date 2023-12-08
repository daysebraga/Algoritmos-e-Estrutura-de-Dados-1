/*Input Format

Na primeira linha, devem ser lidos dois números inteiros (e.g. l e c).

Em seguida, ler l x c elementos.

Após, ler dois números inteiros, sendo o primeiro a posição de uma linha (pl) e o segundo, a posição de uma coluna (pc).

Por fim, ler quatro números inteiros referentes a posição de uma submatriz.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct{
    int **arr;
    int l; 
    int c; 
}Matriz;

Matriz *iniciar(int l, int c){
    Matriz * arr = (Matriz*)malloc(sizeof(Matriz));
    
    arr->l = l;
    arr->c = c;
    
    arr->arr = (int*)malloc(sizeof(int) * l);
        
    for(int i = 0; i < l; i++)
        arr->arr[i] = (int*)malloc(sizeof(int) * c);
    
    return arr;
}

void alterar(Matriz *arr, int x, int i, int j){
    if(arr != NULL)
        arr->arr[i][j] = x;
}

int *obter_linha(Matriz *arr, int pl){
    if((arr != NULL) && (pl >= 0) && (pl < arr->l)){
        int *v = (int*)malloc(sizeof(int) * arr->c);
        for(int i = 0; i < arr->c; i++)
            v[i] = arr->arr[pl][i];
        return v;
    }
    return NULL;
}

int *obter_coluna(Matriz *arr, int pc){
    if((arr != NULL) && (pc >= 0) && (pc < arr->c)){
        int *v = (int*)malloc(sizeof(int) * arr->l);
        for(int i = 0;i < arr->l; i++)
                v[i] = arr->arr[i][pc];
        
        return v;
    }
    return NULL;
}

Matriz *obter_submat(Matriz *arr, int li, int ci, int lf, int cf){
    if((arr != NULL) && (arr->arr != NULL) && (li >= 0) && (ci >= 0) && (lf < arr->l) && (cf < arr->c) && (li < lf) && (ci < cf))
    {
        int submat_l = (lf - li) + 1;
        int submat_c = (cf - ci) + 1;
        Matriz *submat = iniciar(submat_l, submat_c);
        
        if(submat != NULL){
            for(int i = 0; i < submat_l; i++){
               for(int j = 0; j < submat_c; j++)
                   submat->arr[i][j] = arr->arr[li + i][ci + j];
            }
            return submat;
        } 
    }
    
    return NULL;
}

void imprimir_vetor(int *v, int n)
{
    if(v != NULL){
        for(int i = 0; i < n; i++)
            printf("%d ", v[i]);

        printf("\n\n");
    }
}

void imprimir_submat(Matriz *arr)
{
    if((arr != NULL) && (arr->arr != NULL)){
        for(int i = 0; i < arr->l; i++){
            for(int j = 0; j < arr->c; j++)
                printf("%d ",arr->arr[i][j]);
            
            printf("\n");
        }
    }
    
}

int main(void)
{
    int l, c, pl, pc, li, lf, ci, cf, item;
    
    scanf("%d %d", &l, &c);
    
    Matriz *m = iniciar(l, c);
    
    for(int i = 0; i < l; i ++){
        for(int j = 0; j < c; j++){
            scanf("%d", &item);
            alterar(m, item, i, j);
        }
    }
      
    scanf("%d %d", &pl, &pc);
    
    scanf("%d %d %d %d", &li, &ci, &lf, &cf);
    
    int *v_lin = obter_linha(m, pl);
    int *v_col = obter_coluna(m, pc);
    Matriz *submat = obter_submat(m, li, ci, lf, cf);
    
    imprimir_vetor(v_lin, c);
    imprimir_vetor(v_col, l);
    imprimir_submat(submat);
    
    
    free(m);
    free(v_lin);
    free(v_col);
    free(submat);
    
    return 0;
}   
