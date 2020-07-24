#include <stdio.h>

int main()
{
    int i,t,j,n;
    scanf("%d", &t);
    for (j = 1; j <= t; j++)
    {
        int tc = 1;
        scanf("%d", &n);
        printf("Case %d:\n",j);
        for (i = 1; i <= 10; i++)
        {
            printf("%d * %d = %d\n",n,i,n*i);
        }
        tc++;
    }
}
