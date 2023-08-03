#include <stdio.h>

int main()
{
    //int i;
    float a,b,s1,s2;
    while(1)
    {
        scanf("%f", &a);
        for (;;)
        {
            if (a <= 10.0 && a >= 0)
            {
                s1 = a;
                break;
            }
            else
            {
                printf("nota invalida\n");
                scanf("%f", &a);
            }
        }

        scanf("%f", &b);
        for (;;)
        {
            {
                if (b <= 10.0 && b >= 0)
                {
                    s2 = b;
                    break;
                }
                else
                {
                    printf("nota invalida\n");
                    scanf("%f", &b);
                }
            }
        }
        if ((a <= 10.0 && b <= 10.0) && (a >=0.0 && b >=0.0))
        {
            break;
        }
    }
    printf("media = %.2f\n", (s1+s2)/2);
}
