#include <stdio.h>

int main()
{
    int code1, number2, code2, number1;
    float u_price1, u_price2, price, price1,price2;
    scanf("%d%d", &code1, &number1);
    scanf("%f", &u_price1);
    scanf("%d%d", &code2, &number2);
    scanf("%f", &u_price2);
    price = (number1*u_price1) + (number2*u_price2);
    printf("VALOR A PAGAR R$ %.2f\n", price);
    return 0;
}
