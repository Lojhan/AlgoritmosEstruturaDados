#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    //index 0 ... 13
    int i;
    int exemplo[] = {456, 148, 147, 325, 6, 0, 8, 7, 6, 0, 6, 7, 12, 6654};
    // for (i = 0; i < 14; i++)
    // {
    //     printf("\nExemplo 1: %d", exemplo[i]);
    // }

    //index 0 ... 9
    int valores[10];
    for (i = 0; i < 10; i++)
    {
        printf("Digite o %d numero: \n", i + 1);
        scanf("%d", &valores[i]);
    }

    for (i = 0; i < 10; i++)
    {
        printf("\nExemplo 2: %d", valores[i]);
    }

    char palavra[10];
    printf("\nDigite uma palavra de até 10 letras: \n");
    fflush(stdin);
    scanf("%s", &palavra);
    printf("Palavra digitada: %s", palavra);
    for(i = 0; i < 10; i++){
        printf("%c ", palavra[i]);
    }

    // printf("\n\n");
    // system("pause");
}