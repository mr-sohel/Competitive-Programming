#include <stdio.h>

void math_operation(int n1, int n2)
{
	//addition
	printf("%d + %d = %d\n", n1, n2, n1 + n2);
	//substraction
	printf("%d - %d = %d\n", n1, n2, n1 - n2);
	//multiplication
	printf("%d x %d = %d\n", n1, n2, n1 * n2);
	//division
	if(n2 == 0) {
		printf("Can not divide by zero\n");
		return ;
	}
	printf("%d / %d = %d\n", n1, n2, n1 / n2);
}

int main()
{
	int number1, number2;

	while(1) {
		scanf("%d %d", &number1, &number2);
		if(number1 == 0 && number2 == 0) {
			break;
		}
		math_operation(number1, number2);
	}
	return 0;
}
