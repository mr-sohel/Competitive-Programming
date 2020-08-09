#include <stdio.h>

int main()
{
    int dif,x,y,i,sum = 0;
    scanf("%d%d", &x, &y);

    if ( y > x)
    {
        dif = (y - x);
        x++;
        for (i = 1; i <= dif; i++)
        {
            if (y > x)
            {
                if (y % 2 != 0)
                {
                    sum +=x;
                }
                x++;
            }
        }
    }

    printf("%d\n", sum);
    return 0;
}
