#include <stdio.h>

int main()
{
    int a,b,c,i;

    for (i = 0; i < 3; i++)
    {
        scanf("%d%d%d", &a,&b,&c);
        if (a > b && a > c )
        {
            printf("%d\n", a);
        }
        else if (b > a && b > c)
        {
            printf("%d\n", b);
        }
        else
        {
            printf("%d\n", c);
        }
    }
    return 0;

}
