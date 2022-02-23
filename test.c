/**
 *	Author:  Sohel Rana
 *	Date:    2022-02-23 19:36:13
 *	Task:    test 
**/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>
#define endl		'\n'
#define sqr(x)		(x) * (x)
#define gcd(x,y)	__gcd(x, y)
#define lcm(x,y)	((x/gcd(x,y)) * y)
#define debug(x)	printf("#x  = %d\n",x )
#define debug2(x,y)	printf("#x  = %d\t #y = %d\n",x,y)

const double pi = 3.141592653589793238;
const int mod = 1e9+7;
const long long inf = 1e18;
const double eps = 1e-9;
const int mx = 1e5;


int main() 
{
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	int n;
	scanf("%d", &n);
	if (n == 2)
		printf("Hello C\n");
	return 0;
}