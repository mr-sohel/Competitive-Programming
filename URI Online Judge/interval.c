#include <stdio.h>

int main()
{
    double num;
    scanf("%lf", &num);
    if (num < 0 || num > 100.0)
    {
        printf("Fora de intervalo\n");
    }
    else if (num >= 0 && num <= 25.0)
    {
        printf("Intervalo [0,25]\n");
    }
    else if (num > 25.0 && num <= 50.0)
    {
        printf("Intervalo (25,50]\n");
    }
    else if (num > 50.0 && num <= 75.0)
    {
        printf("Intervalo (75,100]\n");
    }
    else if (num > 75.0 && num <= 100)
    {
        printf("Intervalo (75,100]\n");
    }
    return 0;
}
