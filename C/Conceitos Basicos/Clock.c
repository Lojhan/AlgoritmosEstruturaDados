#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// #define SEGS 1000;

int main()
{

    system("cls");
    clock_t inicio, fim;
    double periodo;
    int i;

    printf("\nEsperando cinco segundos...");
    inicio = clock();
    // sleep(5);
    for (i = 0; i < 1000000000; i++)
    {

    }
    fim = clock();
    // periodo = (double) (fim - inicio) / CLOCKS_PER_SEC ;
    periodo = (double) (fim - inicio) ;
    printf("\n\nPeriodo: %.0f", periodo);
}
