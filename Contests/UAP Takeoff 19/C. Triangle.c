/**
 *	Author:  Sohel Rana
 *	Date:    2022-02-23 18:55:51
 *	Task:    C_Triangle 
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
#define debug(x)	cerr<<#x<<" = "<<(x)<< endl
#define debug2(x,y)	cerr<<#x<<" = "<<(x)<<","<<#y<<" = "<<(y)<< endl
#define unsyncIO	ios_base::sync_with_stdio(false); cin.tie(nullptr)


const double pi = 3.141592653589793238;
const int mod = 1e9+7;
const long long inf = 1e18;
const double eps = 1e-9;
const int mx = 1e5;


int main() 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && b == c)
        printf("Equilateral Triangle\n");
    else if (a == b || a == c || b == c)
        printf("Isosceles Triangle\n");
    else
        printf("Bad Triangle\n");
    return 0;
}