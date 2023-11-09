/*Gladstone está desenvolvendo um jogo simples de RPG em que há batalhas, os quais são por turnos, onde, em cada luta,
os jogadores se revezam em cada ataque. Cada personagem, além do nome (string), tem os seguintes atributos representados por números inteiros: energia,
defesa e força. Em cada ataque, a energia do personagem que está sofrendo o golpe é reduzida. O dano (redução de energia)
é dado pela subtração entre o atributo de força (F) do atacante e o atributo de defesa do personagem atacado, o qual pode ter redução de energia. Caso a diferença entre força (atacante)
e defesa (atacado) seja menor igual a zero, o dano será de 1 ponto. Se o dano resultar em energia negativa, o valor da mesma para o personagem derrotado deverá ser "0". Em cada batalha,
o perdedor será o personagem que tiver a energia zerada ou que tiver o menor valor de energia. Também, poderá ocorrer empate.
É importante ressaltar que o personagem com energia zerada não pode mais atacar!

Implemente uma função que receba duas variáveis referentes aos personagens e um número inteiro que represente a quantidade de turnos,
onde o primeiro personagem fornecido como parâmetro começa o ataque. Ao final,
a função deverá imprimir o resultado, indicando o nome personagem vencedor ou se houve empate.

Nas duas primeiras linhas, devem ler lidos os dados dos personagens. "nome (vetor de char) energia (int) defesa (int), força (int)".

Na linha seguinte, deve ser lida a quantidade de rodadas que deverá ter a batalha.
Na primeira e segunda linha, imprimir o nome e a energia restante do primeiro e do segundo personagem, após a execução das rodadas de ataques.

Na terceira lunha, imprimir o nome do personagem vencedor ou "empate", caso os personagens tiverem a mesma quantidade de energia
(neste exercício não levando em conta que os personagens possam iniciar uma batalha com diferentes valores de energia).*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef struct{
    char nome[100];
    int energia;
    int forca;
    int defesa;
}poderes;
void batalha(poderes personagem[2],int num){
    int j;
    int ataque=0;
    
    for(j=0;j<num;j++){
      
      if(personagem[1].energia <= 0)
        {
            personagem[1].energia=0;
            break;
        }

        if(personagem[0].defesa>personagem[1].forca)
        {
            ataque = 1;
            personagem[1].energia = personagem[1].energia - ataque;
        }
        else
        {
            personagem[0].energia = personagem[0].energia + (personagem[0].defesa - personagem[1].forca);
        }


        if(personagem[1].defesa>personagem[0].forca)
        {
            ataque = 1;
            personagem[0].energia = personagem[0].energia - ataque;
        }
        else
        {
            personagem[1].energia = personagem[1].energia + (personagem[1].defesa - personagem[0].forca);
        } 
    }
    
        if(personagem[0].energia>personagem[1].energia){
             printf("%s %d\n", personagem[0].nome, personagem[0].energia);
        printf("%s %d\n", personagem[1].nome, personagem[1].energia);
        printf("%s\n", personagem[0].nome);
        }
    if(personagem[0].energia<personagem[1].energia){
          printf("%s %d\n", personagem[0].nome, personagem[0].energia);
        printf("%s %d\n", personagem[1].nome, personagem[1].energia);
        printf("%s\n", personagem[1].nome);
    }
   
    if(personagem[0].energia==personagem[1].energia){ 
          printf("%s %d\n", personagem[0].nome,personagem[0].energia);
        printf("%s %d\n", personagem[1].nome, personagem[1].energia);
        printf("empate\n");
 }   
}
int main() {
    int i;
    int num;
    poderes personagem[2];
    
    for(i=0;i<2;i++){ 
        
    scanf("%s",personagem[i].nome);
    scanf("%d",&personagem[i].energia);
    scanf("%d",&personagem[i].defesa);
    scanf("%d",&personagem[i].forca);
    }
    
    scanf("%d",&num);
    
    batalha(personagem,num);
    
    return 0;
}
