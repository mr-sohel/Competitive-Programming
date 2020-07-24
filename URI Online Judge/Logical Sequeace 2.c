#include <stdio.h>

int main()
{
    int i,x,y,n = 1;
    scanf("%d%d", &x,&y);
    for (i = 1; i <= y; i++,n++)
    {
        if (n == x)
            printf("%d", i);
        else
        printf("%d ", i);
        if (n  == x)
        {
             printf("\n");
             n = 0;
        }

    }
    return 0;
}
