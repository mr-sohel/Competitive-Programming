#include <stdio.h>

int main()
{
    int t,c1=0,c2=0,c3=0;
    while(1)
    {
        scanf("%d", &t);
        if ( t == 4)
        {
            break;
        }
        else if (t == 1)
        {
           c1++;
        }
        else if (t == 2)
        {
            c2++;
        }
        else if (t == 3)
        {
            c3++;
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", c1);
    printf("Gasolina: %d\n", c2);
    printf("Diesel: %d\n", c3);
}
