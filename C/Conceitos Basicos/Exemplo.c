//Incluir as bibliotecas
#include <stdio.h>
#include <stdlib.h>

//A função main vai permitir iniciar o console/terminal
int main()
{
    //Limpar o console/terminal
    system("cls");

    //Tipos de variáveis - inteiro, real, caractere, logico
    int inteiro = 0, n1 = 1, n2 = 2, n3;
    float real = 123.123;
    char caractere = 'a';
    char palavra[] = "Diogo";

    //Imprimir uma mensagem na tela - imprima()
    printf("Hello World!\n");
    printf("\nHello World!");

    //Imprimir valor das variáveis
    printf("\n\n%d", inteiro);
    printf("\n\n%f", real);
    printf("\n\n%c", caractere);
    printf("\n\n%s", palavra);

    n3 = n1 + n2;
    printf("\n\n%d", n3);

    //Ler dados dos teclado
    printf("\n\nDigite um valor numerico inteiro: ");
    scanf("%d", &inteiro);
    printf("\n\n%d", inteiro);

    printf("\n\nDigite um valor numerico real: ");
    scanf("%f", &real);
    printf("\n\n%f", real);

    printf("\n\nDigite um caractere: ");
    fflush(stdin);
    scanf("%c", &caractere);
    printf("\n\n%c", caractere);

    //Verificar leitura de textos com espaço
    printf("\n\nDigite uma palavra: ");
    fflush(stdin);
    scanf("%s", &palavra);
    printf("\n\nPalavra digitada: %s", palavra);

    int i;
    for(i = 0; i <= 30; i++) {
        printf("\nDia %d: %d", i, inteiro);
        inteiro = inteiro * 2;
    }
    
    if(inteiro > 0){
        //Positivo
    }else{
        if(inteiro < 0){
            //Negativo
        }else{
            //Neutro
        }
    }

    if(inteiro > 0){
        //Positivo
    }else if(inteiro < 0){
        //Negativo
    }else{
        //Neutro
    }

}