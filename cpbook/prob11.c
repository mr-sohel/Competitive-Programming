#include <stdio.h>

int main()
{
    long long int fect=1;
    int i,t,n;

    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        for (i = 2; i <= n; i++)
        {
            fect *= i;
        }
        printf("%lld\n", fect);
        fect = 1;
    }

}
