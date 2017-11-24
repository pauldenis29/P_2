#include <stdio.h>
#include <stdlib.h>

int main()
{
    int var1, var2, tmp;

    printf("Inserisci un numero intero\n");
    scanf("%d", &var1);

    printf("Inserisci un altro numero intero\n");
    scanf("%d", &var2);

    printf("Variabili prima dello scambio:\n %d e %d \n", var1, var2);

    tmp = var1;
    var1 = var2;
    var2 = tmp;

    printf("Variabili dopo lo scambio:\n %d e %d \n", var1, var2);

    return 0;
}
