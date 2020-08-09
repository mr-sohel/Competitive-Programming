#include <iostream>
#include <cstdio>
using namespace std;

unsigned long long fact(int n)
{
    unsigned long long f = 1;
    for(int i = 1; i <= n; i++)
    {
        f *= i;
    }
    return f;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        double sum = 0.0;
        cin>>n;
        for(double i = 1; i <= n; i++)
        {
            sum += (i/fact(i));
        }
        printf("%.4lf\n", sum);
    }
	return 0;
}
