#include <stdio.h>

int main()
{
	int t,a,i, pos = 0, neg = 0;
	scanf("%d", &t);
	for (i = 0; i < t; i++)
	{
		scanf("%d", &a);
		if (a > 0)
			pos++;
		else
			neg++;
	}
	printf("%d %d\n",pos, neg);
	return 0;
}
