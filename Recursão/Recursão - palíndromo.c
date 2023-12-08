/*Inplemente uma função recursiva que verifique se uma string é palíndromo.

Input Format

Na primeira linha, deve ser lida uma string.

Constraints

Se a função não for recursiva, será atribuída nota 0 (zero).

Output Format

Imprimir "palindromo" se a string de entrada for palíndromo, ou imprimir "não palindromo", caso contrário.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void palin(char st[], int in, int fin,int tam){
   
    if(st[in]==st[fin] && in<tam/2){
        palin(st,in+1,fin-1, tam);
    }
    else if(in==tam/2)
        printf("palindromo");
    
    else if(st[in]!=st[fin] )
        printf("nao palindromo");
}
int main() {
    char st[100];
    
    scanf("%s",st);
    
     palin(st, 0, strlen(st)-1, strlen(st));
    return 0;
}
