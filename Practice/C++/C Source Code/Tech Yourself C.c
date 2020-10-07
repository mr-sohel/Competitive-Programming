#include "stdio.h"

void display();

int main()
{
	display();
	printf("\nTeach Yourself C in 21 Days\n");
	display();
	return 0;
}
void display()
{
	int counter;
	for (counter = 0; counter < 30; counter++)
	{
		printf("*");
	}
}
