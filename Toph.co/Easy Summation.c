#include <stdio.h>

int main()
{
    long long int n;
    int t,i;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%lld", &n);
        printf("Case %d: %lld\n", i+1, (n*n));
    }
    return 0;
}
