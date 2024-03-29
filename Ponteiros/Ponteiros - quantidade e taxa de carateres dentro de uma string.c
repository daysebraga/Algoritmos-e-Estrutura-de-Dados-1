/*Implemente uma função que receba uma string (str), uma variável do tipo char (c), um ponteiro do tipo int e um ponteiro do tipo float.
  Na função, a quantidade de vezes que o caratere c aparece na string de entrada deve ser armazenada no ponteiro do tipo int e a taxa de incidência desse caractere dentro da string
(quantidade / tamanho da string) deve ser armazenada no ponteiro de float.

Input Format

Na primeira linha deve ser lida uma string.

Na segunda linha, um caractere.

Constraints

A impressão do número real deve ter duas casas decimais.

Output Format

Na primeira linha deve ser impressa a quantidade de caracteres e na segunda, a taxa de incidência desse caractere dentro da string.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//void contastring(char frase[], char carac, int *qtde, float *taxa);
int main() {
    char fr[100],c;
    int q;
    float t;
    
    scanf("%[^\n]s",fr);
    scanf(" %c",&c);
    contastring(fr,c,&q,&t);
    printf("%d\n",q);
    printf("%.2f",t);

    return 0;
}

void contastring(char frase[], char carac, int *qtde, float *taxa){
    int i,cont=0,contfra=0;
    float tx;
    
    for(i=0;i<frase[i];i++)
    { 
        if(frase[i]==carac)
        { 
            cont++;
         }
        contfra++;
     }  
       
    
    
    *qtde=cont;
    tx=(float)cont/(long int)contfra;
    *taxa=tx;
    
    return;
}
