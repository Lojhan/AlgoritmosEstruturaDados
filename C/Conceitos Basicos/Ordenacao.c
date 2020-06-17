//Bubble Sort, Selection Sort e Insertion Sort
//[x] Criar um vetor de 100 posição com números aleatórios - Função
//[x] Imprimir o vetor no console - Função
//[x] Ordenar o vetor existente de forma crescente - Função
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10000

int vetor[TAM];

int trocas = 0, iteracoes = 0, i;
clock_t inicio, fim;
double periodo;

int main()
{
    system("cls");

    srand(time(NULL));
    for (i = 0; i < TAM; i++)
    {
        vetor[i] = rand() % TAM;
    }

    //printf("---- VETOR SEM ORDENACAO ----\n\n");
    // imprimirVetor();
    //printf("\n\n---- VETOR COM ORDENACAO ----\n\n");

    // bubbleSort();
    selectionSort();
    imprimirVetor();
}

void imprimirVetor()
{
    int i;
    for (i = 0; i < TAM; i++)
    {
        printf("%d ", vetor[i]);
    }
}

void bubbleSort()
{
    int aux, ordenado = 1;
    iteracoes = 0;
    trocas = 0;

    //Pegando a data e hora do sistema
    inicio = clock();

    //Ordenação
    do
    {
        ordenado = 1;
        for (i = 0; i < TAM - iteracoes; i++)
        {
            if (vetor[i] > vetor[i + 1])
            {
                aux = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = aux;
                trocas++;
                ordenado = 0;
            }
        }
        iteracoes++;
    } while (ordenado == 0);

    fim = clock();
    //Calculando o período da ordenação
    periodo = (double)fim - inicio;

    printf("\n\n---- BUBBLE");
    printf("\n---- TEMPO: %.0f", periodo);
    printf("\n---- TROCAS: %d", trocas);
    printf("\n---- ITERACOES: %d\n", iteracoes);
}

void selectionSort()
{
    int j, menor, aux;
    
    inicio = clock();
    for (i = 0; i < TAM; i++)
    {
        menor = i;
        for (j = i + 1; j < TAM; j++)
        {
            if (vetor[j] < vetor[menor])
            {
                menor = j;
            }
        }
        aux = vetor[i];
        vetor[i] = vetor[menor];
        vetor[menor] = aux;
    }

    fim = clock();
    //Calculando o período da ordenação
    periodo = (double)fim - inicio;

    printf("\n\n---- SELECTION");
    printf("\n---- TEMPO: %.0f", periodo);
    printf("\n---- TROCAS: %d", trocas);
    printf("\n---- ITERACOES: %d\n", i);
}