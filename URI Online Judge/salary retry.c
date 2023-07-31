#include <stdio.h>

int main()
{
    int old_s;
    float new_s,inc;
    char p = '%';
    scanf("%d", &old_s);
    if (old_s >= 0.00 && old_s <= 400.00)
    {
        inc = old_s*15.00/100.00;
        printf("Novo salario: %.2f\n", (old_s + inc));
        printf("Reajuste ganho: %.2f\n", inc);
        printf("Em percentual: 15 %c\n", p);

    }
    else if (old_s >= 400.00 && old_s <= 800.00)
    {
        inc = old_s*12.00/100.00;
        printf("Novo salario: %.2f\n", (old_s + inc));
        printf("Reajuste ganho: %.2f\n", inc);
        printf("Em percentual: 12%c\n", p);
    }
    else if (old_s >= 800.00 && old_s <= 1200.00)
    {
        inc = old_s*10.00/100.00;
        printf("Novo salario: %.2f\n", (old_s + inc));
        printf("Reajuste ganho: %.2f\n", inc);
        printf("Em percentual: 10%c\n", p);
    }

    else if (old_s >= 1200.00 && old_s <= 2000.00)
    {
        inc = old_s*7.00/100.00;
        printf("Novo salario: %.2f\n", (old_s + inc));
        printf("Reajuste ganho: %.2f\n", inc);
        printf("Em percentual: 7%c\n", p);
    }
    else if (old_s == 2000.00)
    {
        inc = old_s*4.00/100.00;
        printf("Novo salario: %.2f\n", (old_s + inc));
        printf("Reajuste ganho: %.2f\n", inc);
        printf("Em percentual: 4%c\n", p);
    }
    return 0;
}
