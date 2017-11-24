#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valore_utente;
    int valore_assoluto;

    printf("Inserire un numero: \n");
    scanf("%d", &valore_utente);

    if (valore_utente < 0)
        {
            valore_assoluto = - valore_utente;
            printf("Il valore assoluto di %d e':\n %d", valore_utente, valore_assoluto);
        }
        else
        {
            printf("Il valore assoluto di %d e':\n %d", valore_utente, valore_utente);
        }

    return 0;
}
