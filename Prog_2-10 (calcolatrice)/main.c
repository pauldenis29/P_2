#include <stdio.h>
#include <stdlib.h>

//%*c (spazio scanf = No problems)

int main()
{
    float somma, sottrazione, num_utente_x, num_utente_y ;
    char car;

    printf("Specificare l'opreazione ('+' = addizione e '-' = sottrazione) e due numeri (inserire uno spazio tra i tre termini):\n"); // inserire uno spazio tra i tre termini
    scanf("%c%*c%f%*c%f", &car, &num_utente_x, &num_utente_y);

    if (car == '+')
        {
            somma = num_utente_x + num_utente_y;
            printf("\n %.2f +\n %.2f\n -------\n %.2f\n", num_utente_x, num_utente_y, somma);
        }

        if (car == '-')

            {
                sottrazione = num_utente_x - num_utente_y;
                printf("\n %.2f -\n %.2f\n -------\n %.2f\n", num_utente_x, num_utente_y, sottrazione);
            }
        else
            {
                printf("Inserisci un carattere valido!");
            }



    return 0;
}
