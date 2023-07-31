#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c;
	float result1, result2;
	scanf("%d%d%d", &a, &b, &c);
	result1 = ((-b)+sqrt(4*a*c)) / (2*a);
	result2 = ((-b)-sqrt(4*a*c)) / (2*a);
	printf("%f\n", result1);
	printf("%f\n", result2);
	
	return 0;
}
