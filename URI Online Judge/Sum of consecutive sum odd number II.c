#include <stdio.h>

int main()
{
    int x,y,n,i;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        int sum = 0;
        scanf("%d%d", &x,&y);
        if (x > y)
        {
            y++;
            for (;y < x; y++)
            {
                if (y % 2 != 0)
                {
                    sum+=y;
                }

            }
            printf("%d\n",sum);
        }
        else if (y > x)
        {
            x++;
            for (;x < y; x++)
            {
                if (x % 2 != 0)
                {
                    sum +=x;
                }
            }
            printf("%d\n",sum);
        }
        else if (x == y)
        {
            printf("0\n");
        }
    }

}
