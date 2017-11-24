#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lenght, width, perimeter;

    lenght = 4.7;
    width = 5.9;

    perimeter = (lenght + width)*2;  // notare che dopo la compilazione appare warning con la variabile perimeter che risulta "Set but not used"

    return 0;
}
