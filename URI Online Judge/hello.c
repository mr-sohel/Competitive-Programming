#include <stdio.h>
int main()
{
	int i,n;

	scanf("%d", &n);
	if(n >=1 && n <= 5)
	{
		char str[n];
		for ( i = 1; i <= n; i++)
		{
			str[i-1] = '!';
		}
		str[n] = '\0';
		printf("Hello IUT");
		printf("%s", str);
		printf("\n");
	}
	return 0;
}
