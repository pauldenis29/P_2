#include <stdio.h>
#include <stdlib.h>

#define FALSE 0
#define TRUE 1

int main()
{
    char valuta, flag, ultimoCarattere;
    float euro;
    long lire;

    flag = TRUE;

    while(flag == TRUE)
    {
        printf("Inserire la valuta di provenienza (E = Euro e L = Lire) assieme all'importo da convertire:\n");
        scanf("%c", &valuta);

        switch(valuta)
        {
            case 'L':
            case 'l':
                scanf("%ld", &lire);
                euro = lire/1936.27;
                printf("\n%ld Lire = %.2f Euro\n\n", lire, euro);
            break;

            case 'E':
            case 'e':
                scanf("%f", &euro);
                lire = euro*1936.27;
                printf("\n%.2f Euro = %ld Lire\n\n", euro, lire);
            break;

            case 'F':  //Bisogna rendere evidente la fine di un istruzione come in questo caso avviene con lo switch (basti pensare a un programma di 2000 righe!)
            case 'f':
                flag = FALSE;
            break;

            default:
                printf("Errore nel formato dei dati.\n\n");

        }

        do
        {
            scanf("%c", &ultimoCarattere);
        }
        while(ultimoCarattere != '\n');

    }

    return 0;
}
