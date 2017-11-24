#include <stdio.h>
#include <stdlib.h>

int main()
{
    float price, tax, receipt;

    printf("Please insert the value of the price: \n");
    scanf("%f", &price);

    printf("Please insert the value of the tax: \n");
    scanf("%f", &tax);

    receipt = (price+price*tax/100);

    printf("The value of receipt is: %.2f \n", receipt);


    return 0;
}
