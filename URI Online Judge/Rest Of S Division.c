#include <stdio.h>

int main()
{
    int i,x,y;
    scanf("%d%d", &x,&y);
    if (x < y)
    {
        x++;
        for (;x < y; x++)
        {
            if ((x % 5 == 2)||(x % 5 == 3))
            {
                printf("%d\n", x);
            }
        }
    }
    else if (y < x)
    {
        y++;
        for (;y < x; y++)
        {
            if ((y % 5 == 2) || (y % 5 == 3))
            {
                printf("%d\n", y);
            }
        }
    }
    return 0;

}
