#include <stdio.h>

int fun(char ch) { 
	if(ch == '0' ||ch == '1' || ch == '2' || ch == '3' || ch == '4' || ch == '5' || ch == '6' || ch == '7' || ch == '8' || ch == '9') // isdigit can be also used
		return 1;
	return 0;
}

int main()
{
	char ch;
	scanf("%c", &ch);
	int res = fun(ch);
	if(res == 1)
		printf("%c is a digit\n", ch);
	else
		printf("%c is not a digit\n", ch);
	return 0;
}
