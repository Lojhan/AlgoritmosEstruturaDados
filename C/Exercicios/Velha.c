#include <stdio.h>
#include <stdlib.h>

char matriz[3][3] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};

int main()
{
    int jogador = 1, jogadas = 1;
    //Variável para controlar a vez do jogador
    //Criar um laço de repetição para alternar as jogadas
    //Imprimir o tabuleiro no console a cada jogada
    //Pedir qual é a posição que será marcada

    //Verificar a vitória do jogador 1
    //Verificar a vitória do jogador 2
    //Verificar o empate
    //Verificar se a posição está preenchida
    do
    {
        system("cls");
        printf("\n\nJogada: %d", jogadas);
        if (jogador == 1)
        {
            printf("\nJogador 1 ");
            preencherTabuleiro(jogador);
            jogador = 2;
        }
        else
        {
            printf("\nJogador 2 ");
            preencherTabuleiro(jogador);
            jogador = 1;
        }
        // sleep(1);
        imprimirTabuleiro();

        int resultado = verificarFim(jogadas, jogador);
        if (resultado != 0)
        {
            if (resultado == 1)
            {
                printf("\n\n ---------- JOGADOR 1 ---------- ");
            }
            else if (resultado == 2)
            {
                printf("\n\n ---------- JOGADOR 2 ---------- ");
            }
            else
            {
                printf("\n ---------- EMPATE ---------- ");
            }
            printf("\nResultado: %d", resultado);
            break;
        }

        jogadas++;
        printf("\n\n");
        system("pause");
    } while (jogadas <= 9);
}

//Toda a função quando é chamada, ao final da execução do seu código, deve retornar
//para onde foi chamada.

//Uma função não pode ser criada dentro de outra função

//Estrutura básica de uma função
//Deve obrigatoriamente ter um tipo definido - void, int, float, char ...
//Deve obrigatoriamente ter um nome começando com um verbo
//É opcional o uso de parâmetros

void imprimirTabuleiro()
{
    printf("\n");
    printf("\n %c | %c | %c ", matriz[0][0], matriz[0][1], matriz[0][2]);
    printf("\n-----------");
    printf("\n %c | %c | %c ", matriz[1][0], matriz[1][1], matriz[1][2]);
    printf("\n-----------");
    printf("\n %c | %c | %c ", matriz[2][0], matriz[2][1], matriz[2][2]);
}

void preencherTabuleiro(int j)
{
    int linha, coluna;
    printf("\nDigite a linha: ");
    scanf("%d", &linha);
    printf("Digite a coluna: ");
    scanf("%d", &coluna);
    if (j == 1)
    {
        matriz[linha][coluna] = 'X';
    }
    else
    {
        matriz[linha][coluna] = 'O';
    }
}

int verificarFim(int jogadas, int jogador)
{
    if (jogadas >= 5)
    {
        if ((matriz[0][0] == "X" && matriz[0][1] == "X" && matriz[0][2] == "X") ||
            (matriz[1][0] == "X" && matriz[1][1] == "X" && matriz[1][2] == "X") ||
            (matriz[2][0] == "X" && matriz[2][1] == "X" && matriz[2][2] == "X") ||
            (matriz[0][0] == "X" && matriz[1][0] == "X" && matriz[2][0] == "X") ||
            (matriz[0][1] == "X" && matriz[1][1] == "X" && matriz[2][1] == "X") ||
            (matriz[0][2] == "X" && matriz[1][2] == "X" && matriz[2][2] == "X") ||
            (matriz[0][0] == "X" && matriz[1][1] == "X" && matriz[2][2] == "X") ||
            (matriz[0][2] == "X" && matriz[1][1] == "X" && matriz[2][0] == "X"))
        {
            return 1;
        }
        if ((matriz[0][0] == "O" && matriz[0][1] == "O" && matriz[0][2] == "O") ||
            (matriz[1][0] == "O" && matriz[1][1] == "O" && matriz[1][2] == "O") ||
            (matriz[2][0] == "O" && matriz[2][1] == "O" && matriz[2][2] == "O") ||
            (matriz[0][0] == "O" && matriz[1][0] == "O" && matriz[2][0] == "O") ||
            (matriz[0][1] == "O" && matriz[1][1] == "O" && matriz[2][1] == "O") ||
            (matriz[0][2] == "O" && matriz[1][2] == "O" && matriz[2][2] == "O") ||
            (matriz[0][0] == "O" && matriz[1][1] == "O" && matriz[2][2] == "O") ||
            (matriz[0][2] == "O" && matriz[1][1] == "O" && matriz[2][0] == "O"))
        {
            return 2;
        }
        if (jogadas == 9)
        {
            return 3;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
}
// return 0; o jogo não acabou
// return 1; vitória do jogador 1
// return 2; vitória do jogador 2
// return 3; empate

void jogarComputador(){
}