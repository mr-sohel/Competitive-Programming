#include <stdio.h>

int main()
{   int t,i;
    long long int sum,n;
    scanf("%d", &t);
    for (i = 1 ; i <= t; i++)
	{
	    scanf("%lld", &n);
	    sum = 2*n*1000;
	    printf("Case %d: %lld\n", i,sum);
	}
    return 0;
}
