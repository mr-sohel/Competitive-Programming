#include <stdio.h>

int main()
{
    double old,n ,i;
    char p = '%';
    scanf("%lf", &old);
    if (old >= 0 && old <= 400.00)
    {
        i = old * 15/100;
        n = i + old;
        printf("Novo salario: %.2f\n", n);
        printf("Reajuste ganho: %.2f\n", i);
        printf("Em percentual: 15 %c\n", p);
    }
    else if (old >= 400.01 && old <= 800.00)
    {
        i = old * 12/100;
        n = i + old;
        printf("Novo salario: %.2f\n", n);
        printf("Reajuste ganho: %.2f\n", i);
        printf("Em percentual: 12 %c\n", p);
    }
    else if (old >= 800.01 && old <= 1200.00)
    {
        i = old * 10/100;
        n = i + old;
        printf("Novo salario: %.2f\n", n);
        printf("Reajuste ganho: %.2f\n", i);
        printf("Em percentual: 10 %c\n", p);
    }
    else if (old >= 1200.01 && old <= 2000.00)
    {
        i = old * 7/100;
        n = i + old;
        printf("Novo salario: %.2f\n", n);
        printf("Reajuste ganho: %.2f\n", i);
        printf("Em percentual: 7 %c\n", p);
    }
    else if (old > 2000.00)
    {
        i = old * 4/100;
        n = i + old;
        printf("Novo salario: %.2f\n", n);
        printf("Reajuste ganho: %.2f\n", i);
        printf("Em percentual: 4 %c\n", p);

    }
    return 0;
}
