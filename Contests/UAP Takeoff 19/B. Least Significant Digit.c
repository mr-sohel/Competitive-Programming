/**
 *	Author:  Sohel Rana
 *	Date:    2022-02-23 19:10:23
 *	Task:    Least Significant Digit.c 
**/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#define endl		'\n'
#define sqr(x)		(x) * (x)
#define gcd(x,y)	__gcd(x, y)
#define lcm(x,y)	((x/gcd(x,y)) * y)
#define debug(x)	printf("#x  = %d\n",x );
#define debug2(x,y)	printf("#x  = %d\t #y = %d\n",x,y)

const long double pi = 3.141592653589793238;
const int mod = 1e9+7;
const long long inf = 1e18;
const double eps = 1e-9;
const int mx = 1e5;


int main() 
{
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	//unsyncIO;
	long long int n, d, cnt = 0;
	scanf("%lld %lld", &n, &d);
	int flag = 0;
	for (int i = 1;i <= n; ) {
		
		int t;
		t = i % 10;
		if(t == d) {
			flag = 1;
			i+= 10;
			cnt++;
		}
		if(flag == 0)
			i++;
	}
	printf("%lld\n", cnt);
	return 0;
}