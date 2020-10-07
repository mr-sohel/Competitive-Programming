#include <stdio.h>

int main()
{
	//output: Bangladesh
	printf("Bangladesh");
	//output: Bangladesh (followed by newline)
	printf("Bangladesh\nBangladesh\n");
	//output:Bangladesh tab characeter Bangladesh, why only two Bangladesh?
	printf("Bangladesh\rBangladesh\tBangladesh\n");

	return 0;

}
