#include <stdio.h>

int main()
{
    int i, N, x, y,sum = 0;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d%d", &x, &y);
    }

    if(x > y)
    {
        y++;
        for (i = 0; i < N; i++)
        {
            for (; y < x; y++)
            {
                if (y % 2 != 0)
                {
                    sum += y;
                }
            }
        }
        printf("%d\n", sum);
    }
    else if (y > x)
    {
        x++;
        for (i = 0; i < N; i++)
        {
            for (;x < y; x++)
            {
                if (y % 2 != 0)
                {
                    sum += y;
                }
            }
        }
        printf("%d\n", sum);
    }



}
