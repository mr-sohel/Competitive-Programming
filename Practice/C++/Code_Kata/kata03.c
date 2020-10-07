#include <stdio.h>

int main()
{
	int number1, number2;
	scanf("%d %d", &number1, &number2);

	//addition
	printf("%d + %d = %d\n", number1, number2, number1 + number2);
	//substraction
	printf("%d - %d = %d\n", number1, number2, number1 - number2);
	//multiplication
	printf("%d x %d = %d\n", number1, number2, number1 * number2);
	// division
	printf("%d / %d = %d\n", number1, number2, number1 / number2);

	return 0;
}
