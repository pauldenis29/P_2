#include <stdio.h>
#include <stdlib.h>

//scmbio di due variabili senza una terza variabile di appoggio

int main()
{
    int var1, var2; // 5 e -3

    var1 = 10;
    var2 = 3;

    var2 -= var1;  // var2 = var2 - var1
    var1 = var2 + var1;
    var2 = var1 - var2;


    return 0;
}
