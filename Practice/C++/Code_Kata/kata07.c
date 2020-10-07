#include <stdio.h>

int add(int n1, int n2) {
	return n1 + n2;
}
int sub(int n1, int n2) {
	return n1 - n2;
}

int mul(int n1, int n2) {
	return n1 * n2;
}

int div(int n1, int n2) {
	return n1 / n2;
}

int main()
{
	int n, result, number1, number2;
	while(1) {
		printf("Enter two numbers (or two 0s to exit): ");
		scanf("%d %d", &number1, &number2);
		if(number1 == 0 && number2 == 0) {
			printf("Program Terminated.\n");
			break;
		}
		printf("Enter \n\t1 for addition\n\t2 for substraction\n\t3 for multiplication\n\t4 for division\n: ");
		scanf("%d", &n);
		if(n == 1) {
			result = add(number1, number2);
		}
		else if (n == 2) {
			result = sub(number1, number2);
		}
		else if(n == 3) {
			result = mul(number1, number2);
		}
		else if(n == 4) {
			if(number2 == 0) {
				printf("Can not divide by zero\n");
				continue;
			}
			result = div(number1, number2);
		}
		else {
			printf("Unknown operation\n");
			continue;
		}
		printf("Result : %d\n", result);
	}
	return 0;
}	
