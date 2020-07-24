#include <stdio.h>

int main()
{
    int t,n,i,j;
    scanf("%d",&t);
    for (int test = 1; test <= t; test++)
    {
        scanf("%d", &n);
        printf("Case %d:\n", test);
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= i; j++)
            {
                printf("%d", j);
            }
            printf("\n");
        }
    }
    return 0;
}
