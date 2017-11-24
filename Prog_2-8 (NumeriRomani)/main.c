#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, decina, unita;

    printf("Inserire un numero da 1 a 100:\n");
    scanf("%d", &numero);

    if (numero <= 0)
    {
        printf("Numero non rappresentabile mediante i numeri romani\n");
    }
        else
        {
            printf("\n%d = ", numero);
            decina = numero / 10; //Dividendo il numero inserito per 10 so se la decina appartiene al case 1 (X), case 2 (XX) ecc..
            unita = numero % 10; //Facendo il modulo del numero MOD 10 ho come risultato il resto della divisione.

            switch (decina)

            {
                case 1: printf("X");
                break;

                case 2: printf("XX");
                break;

                case 3: printf("XXX");
                break;

                case 4: printf("XL");
                break;

                case 5: printf("L");
                break;

                case 6: printf("LX");
                break;

                case 7: printf("LXX");
                break;

                case 8: printf("LXXX");
                break;

                case 9: printf("LC");
                break;

                case 10: printf("C");
                break;
            }

            switch (unita)
            {

                case 1: printf("I");
                break;

                case 2: printf("II");
                break;

                case 3: printf("III");
                break;

                case 4: printf("IV");
                break;

                case 5: printf("V");
                break;

                case 6: printf("VI");
                break;

                case 7: printf("VII");
                break;

                case 8: printf("VIII");
                break;

                case 9: printf("IX");
                break;

            }
            printf("\n\n");
        }

    return 0;

}
