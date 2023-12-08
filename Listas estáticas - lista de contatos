/*Dada uma função que receba uma lista estática de contatos e uma string. Essa função deverá imprimir os contatos que contêm essa string no nome. Por exemplo, para a string "son", podem ser encontrados nomes como: Son**ia, Ander**son, Jeffer**son**.

Input Format

A primeira linha a ser lida deve ser a string que deve ser procurada. Em seguida, deve ser lida um número inteiro referente à quantidade de nomes que devem ser incluídos na lista.

Constraints

Usar TAD de listas estáticas.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_SIZE 100
#define MAX_NAME 50

typedef struct Lista {
    char contatos[MAX_SIZE][MAX_NAME];
    int tam;
} Lista;

Lista* criar_lista() {
    Lista* l = (Lista*)malloc(sizeof(Lista));
    l->tam = 0;
    return l;
}

int lista_vazia(Lista* l) {
    if (l == NULL)
        return -1;
    else if (l->tam > 0)
        return 0;
    else
        return 1;
}

int lista_cheia(Lista* l) {
    if (l == NULL)
        return -1;
    else if (l->tam < MAX_SIZE)
        return 0;
    else
        return 1;
}

int buscar(Lista* l, char* chave) {
    int i;
    if (!lista_vazia(l)) {
        for (i = 0; i < l->tam; i++) {
            if (strstr(l->contatos[i], chave) != NULL) {
                return i;
            }
        }
    }
    return -1;
}

int inserir(Lista* l, char* nome) {
    if (!lista_cheia(l)) {
        strcpy(l->contatos[l->tam], nome);
        l->tam++;
        return 1;
    }
    return 0;
}

void imprimir_contatos_string(Lista* l, char* chave) {
    int i;
    if (!lista_vazia(l)) {
        for (i = 0; i < l->tam; i++) {
            if (strstr(l->contatos[i], chave) != NULL) {
                printf("%s\n", l->contatos[i]);
            }
        }
    }
}

int main() {
    
    char chave[MAX_NAME];
    int num_contatos;
    
    Lista* lista = criar_lista();
    
    scanf("%s", chave);
    
    scanf("%d", &num_contatos);

    for (int i = 0; i < num_contatos; i++) {
        char nome[MAX_NAME];
        scanf("%s", nome);
        inserir(lista, nome);
    }    
    imprimir_contatos_string(lista, chave);
    
    free(lista);

    return 0;
}
