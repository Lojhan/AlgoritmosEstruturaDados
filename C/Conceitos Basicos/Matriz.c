#include <stdio.h>
#include <stdlib.h>

int main()
{

    //Linha e coluna
    int matriz[5][5];
    int i, j;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            matriz[i][j] = rand() % 1000;
        }
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (i == j)
            {
                printf("%d ", matriz[i][j]);
            }
        }
        printf("\n");
    }
}