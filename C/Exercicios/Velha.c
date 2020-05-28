#include<stdio.h>
#include<stdlib.h>

int main(){
    int jogador = 1, jogadas = 1;
    //Variável para controlar a vez do jogador
    //Criar um laço de repetição para alternar as jogadas
    system("cls");
    do
    {
        printf("\n\nJogada: %d", jogadas);
        if(jogador == 1){
            printf("\nJogador 1: ");
            jogador = 2;
        }else{
            printf("\nJogador 2: ");
            jogador = 1;
        }
        sleep(1);
        jogadas++;
    } while (jogadas <= 9);
    
}