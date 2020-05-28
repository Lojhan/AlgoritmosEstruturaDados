#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 5

int main()
{
    system("cls");

    char palavra[TAMANHO];
    int posicoes[TAMANHO] = {-1, -1, -1, -1, -1};
    int i, randomico, existe = 0, final = 0;

    //Declarar a variável da palavra com o tamanho da constante
    //Ler a palavra para dentro do vetor
    //Gerar um número aleatório
    //Gerar um número aleatório TAMANHO vezes - 5 min

    printf("Digite uma palavra de cinco letras: ");
    fflush(stdin);
    scanf("%s", &palavra);

    srand(time(NULL));

    //Gerando um número aleatório e único
    do
    {
        do
        {
            existe = 0;
            randomico = rand() % TAMANHO;
            printf("\nNumero: %d ", randomico);
            //Verificar se o número gerado é igual a alguma posição do vetor
            for (i = 0; i < TAMANHO; i++)
            {
                if (posicoes[i] == randomico)
                {
                    existe = 1;
                    break;
                }
            }
        } while (existe == 1);

        //Guardar o valor aleatório e único que foi gerado dentro do vetor de posições
        for (i = 0; i < TAMANHO; i++)
        {
            if (posicoes[i] == -1)
            {
                posicoes[i] = randomico;
                final++;
                break;
            }
        }
    } while (final != 5);
    //Um laço para imprimir o seu vetor de posições
    printf("\n\n");
    for (i = 0; i < TAMANHO; i++)
    {
        printf("%d ", posicoes[i]);
    }
    printf("\n");
    for (i = 0; i < TAMANHO; i++)
    {
        printf("%c ", palavra[posicoes[i]]);
    }
}