#include <stdio.h>

// this kata is to practice writing user defined function

void math_operations (int n1, int n2)
{
	//addition
	printf("%d + %d = %d\n", n1, n2, n1 + n2);
	//substraction
	printf("%d - %d = %d\n", n1, n2, n1 - n2);
	//multiplication
	printf("%d x %d = %d\n", n1, n2, n1 * n2);
	//division
	printf("%d / %d = %d\n", n1, n2, n1 / n2);
}

int main()

{
	int number1, number2;
	scanf("%d %d", &number1, &number2);
	math_operations(number1, number2);
	
	return 0;
}	
