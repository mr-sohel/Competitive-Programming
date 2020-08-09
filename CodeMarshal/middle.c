#include <stdio.h>

int main()
{
	int a,b,c,t,i;
	scanf("%d", &t);
	for (i = 1; i <= t; i++)
	{
		scanf("%d%d%d", &a,&b,&c);
		if ((a > b && a < c) || (a > c && a < b))
		{
			printf("Case %d: %d\n", i,a);
		}
		else if ((b > a && b < c) || (b > c && b < a))
		{
			printf("Case %d: %d\n", i,b);
		}
		else if ((c > a && c < b) || (c > b && c < a))
		{
			printf("Case %d: %d\n",i,c);
		}
		else if (a == b)
		{
			printf("Case %d: %d\n",i,b);
		}
		else if (b == c)
		{
			printf("Case %d: %d\n",i,c);
		}
		else if ( c == a)
		{
			printf("Case %d: %d\n",i,c);
		}
	}
	return 0;
}
