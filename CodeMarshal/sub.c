#include <stdio.h>

int main()
{
	char a, b, sub, minus = '/';
	scanf("%c %c", &a, &b);
	sub = a / b;
	printf("%c %c %c = %d", a, minus, b, sub);
	return 0;
}
