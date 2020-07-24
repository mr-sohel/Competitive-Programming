#include <iostream>
#include <math.h>
#include <cstdio>

using namespace std;

int main()
{
    int t;
    double a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if(((((a+b) > c) && (a+c) > b) && (b+c) > a))
        {
            double s,area;
            s = (a+b+c) / 2;
            area = sqrt(s*(s-a)*(s-b)*(s-c));
            printf("Area = %.3lf\n", area);
        }
    }
	return 0;
}
