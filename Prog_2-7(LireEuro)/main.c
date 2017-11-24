#include <stdio.h>
#include <stdlib.h>

//1 Euro = 1936,27 Lire
//15000000 Lire corrispondono a 7746.85 Euro
// Floating point (%.2f), printf("%.2f", 37.777779);


int main()
{
    float valore_utente, euro, lire; // usare long per le lire
    char car;

    printf("Inserire la valuta di provenienza L/E (Lire/Euro) e la quantita' da convertire:\n");
    scanf("%c%f", &car, &valore_utente);

    if (car == 'E' || car == 'e')
        {
            lire = (valore_utente * 1000)/ 0.516;
            printf("%.2f Euro corrispondo a %.0f Lire.\n", valore_utente, lire);
        }
        else if (car == 'L' || car == 'l')
        {
            euro = (valore_utente * 0.516)/ 1000;
            printf("%.0f Lire corrispondo a %.2f Euro.\n", valore_utente, euro);
        }
        else
        {
            printf("Inserisci un carattere valido furbetto!");
        }

    return 0;
}
