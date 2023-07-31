#include <stdio.h>

int main()
{
    int s,e,i,sum1 = 0, sum[3] = {0,0,0};
    char c = ' ';

    for (i = 0; i < 3; i++)
    {
        scanf("%d%d", &s,&e);
            if (s == 0 || e == 0 || (s < 0 || e < 0))
        {
            return 0;
        }
        else
        {
            if (s > e)
            {
                for (;s >= e; e++)
                {
                    sum[i] += e;
                    printf("%d%c", e,c);
                }
                printf("Sum=%d\n", sum[i]);
                //return 0;
            }
            else if (s < e)
            {
                for (;s <= e; s++)
                {
                    sum[i] += s;
                    printf("%d%c", s,c);
                }
                printf("Sum=%d\n", sum[i]);
                //return 0;
            }
        }
    }
    return 0;
}
