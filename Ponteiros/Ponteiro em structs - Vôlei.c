/*Um treinador de voleibol gostaria de manter estatísticas sobre sua equipe. A cada jogo, seu auxiliar anota quantas tentativas de saques, bloqueios e ataques cada um de seus jogadores fez,
bem como quantos desses saques, bloqueios e ataques tiveram sucesso (resultaram em pontos). Seu programa deve mostrar qual o percentual de saques, bloqueios e ataques do time todo tiveram sucesso.

O programa deve ter a seguinte struct:

typedef struct {
    char nome[255];
    int saquesTotal;
    int bloqueiosTotal;
    int ataquesTotal;
    int saquesSucesso;
    int bloqueiosSucesso;
    int ataquesSucesso;
}Jogador;
A taxa de sucesso de cada jogador deve ser calculada em porcentagem (%) para cada um individualmente.

Para isso crie uma função que recebe a struct como REFERÊNCIA e preencha as variáveis dentro dessa função.

Input Format

A entrada é dada pelo número de jogadores N, seguido pelo nome de cada um dos jogadores. Abaixo do nome de cada jogador, seguem duas linhas com três inteiros cada. Na primeira linha S, B e A representam a quantidade de tentativas de saques, bloqueios e ataques e na segunda linha, S1, B1 e A1 com o número de saques, bloqueios e ataques deste jogador que tiveram sucesso.

A saída deve conter o percentual total de saques, bloqueios e ataques do time todo que resultaram em pontos, conforme mostrado nos exemplos.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef struct {
    char nome[255];
     int saquesTotal;
     int bloqueiosTotal;
     int ataquesTotal;
     int saquesSucesso;
     int bloqueiosSucesso;
     int ataquesSucesso;
}Jogador;

void rodadas(Jogador *personagem, int num){
    
    float Pata;
    float  Pblo;
    float  Psa;
    int i;
    int saques=0;
    int bloqueios=0;
    int ataque=0;
    int saquesS=0;
    int bloqueiosS=0;
    int ataqueS=0;
    
    
    for(i=0;i<num;i++){
        saques=saques+personagem[i].saquesTotal;
        bloqueios=bloqueios+personagem[i].bloqueiosTotal;
        ataque=ataque+personagem[i].ataquesTotal;
        saquesS=saquesS+personagem[i].saquesSucesso;
        bloqueiosS=bloqueiosS+personagem[i].bloqueiosSucesso;
        ataqueS=ataqueS+personagem[i].ataquesSucesso;
    }
 
    Psa=(saquesS/(float)saques)*100;
    Pblo=(bloqueiosS/(float)bloqueios)*100;
    Pata=(ataqueS/(float)ataque)*100;
    
    printf("Pontos de Saque: %.2f%%\n",(float)Psa);
    printf("Pontos de Bloqueio: %.2f%%\n",(float)Pblo);
    printf("Pontos de Ataque: %.2f%%\n",(float)Pata);
}
int main(){
 
    int num;
    int i;
    
    
    scanf("%d",&num);
    
   Jogador personagem[num];
    
    for(i=0;i<num;i++){ 
    scanf("%s",personagem[i].nome);
    scanf("%d",&personagem[i].saquesTotal);
    scanf("%d",&personagem[i].bloqueiosTotal);
    scanf("%d",&personagem[i].ataquesTotal);
    scanf("%d",&personagem[i].saquesSucesso);
    scanf("%d",&personagem[i].bloqueiosSucesso);
    scanf("%d",&personagem[i].ataquesSucesso);
     }
    
    rodadas(personagem,num);
    return 0;
}
