#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // setlocale(LC_ALL, "pt-BR");

    char continuar, sexo, sintomas, doencas;
    int idade, masculino = 0, feminino = 0, totalPessoas, caso1 = 0, caso2 = 0, caso3 = 0, crianca = 0, adulto = 0, idoso = 0;

    //Criar um laço de repetição que seja executado enquanto o usuário desejar
    do
    {
        system("cls");

        //Perguntas das entrevistas
        printf("1.	Informe o sexo? \n");
        fflush(stdin);
        scanf("%c", &sexo);
        if (sexo == 'f')
        {
            feminino++;
        }
        else
        {
            masculino++;
        }

        printf("\n2.	Informe a idade? \n");
        scanf("%d", &idade);
        if (idade <= 18)
        {
            crianca++;
        }
        else if (idade <= 59)
        {
            adulto++;
        }
        else
        {
            idoso++;
        }

        printf("\n3.	Dificuldade em Respirar/Dor de Garganta/Febre/Tosse?\n");
        fflush(stdin);
        scanf("%c", &sintomas);

        printf("\n4.	Doenças como Diabetes/Doença Cardíaca/Pressão Alta? \n");
        fflush(stdin);
        scanf("%c", &doencas);

        //Imprimir as mensagens da primeira saída de informação
        if ((sintomas == 's' && doencas == 's') || ((sintomas == 's' || doencas == 's') && idade > 60))
        {
            printf("\nProcurar uma unidade de saúde!\n\n");
            caso1++;
        }
        else if ((sintomas == 's' || doencas == 's') && (idade > 40 && idade <= 60))
        {
            printf("\nMonitorar o estado de saúde em casa!\n\n");
            caso2++;
        }
        else if (sintomas == 'n' && doencas == 'n')
        {
            printf("\nVocê está bem, mas fique em casa!!\n\n");
            caso3++;
        }

        printf("Deseja continuar registrando as entrevistas?\n");
        fflush(stdin);
        scanf("%c", &continuar);

    } while (continuar == 's');

    //Dados da segunda saída -> 1º Informação
    printf("\n\nPorcentagem feminina: %.2f", (double)feminino / (double)(feminino + masculino));

    totalPessoas = feminino + masculino;
    float porcMasculino = (double)masculino / (double)totalPessoas;
    printf("\n\nPorcentagem masculina: %.2f", porcMasculino);

    //Dados da segunda saída -> 2º Informação
    printf("\n\nPorcentagem caso 1: %.2f", (double)caso1 / (double)(caso1 + caso2 + caso3));
    printf("\n\nPorcentagem caso 2: %.2f", (double)caso2 / (double)(caso1 + caso2 + caso3));
    printf("\n\nPorcentagem caso 3: %.2f", (double)caso3 / (double)(caso1 + caso2 + caso3));

    //Dados da segunda saída -> 2º Informação
    printf("\n\nPorcentagem crianças: %.2f", (double)crianca / (double)(crianca + adulto + idoso));
    printf("\n\nPorcentagem adulto: %.2f", (double)adulto / (double)(crianca + adulto + idoso));
    printf("\n\nPorcentagem idoso: %.2f", (double)idoso / (double)(crianca + adulto + idoso));

    //Terceira saída de dados
    int i;
    for (i = 1; i < 31; i++)
    {
        caso1 = caso1 * 2;
        printf("Dia %d: %d\n", i, caso1);
    }

    printf("\n\n");
    system("pause");
}