//1 2 + 2 2 + 3 2 + . . . + n 2

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long n,sum = 0;
    cin>>n;
    for(long i = 1; i <= n; i++)
    {
        sum += pow(i,2);
    }
    cout<<sum<<endl;
    return 0;
}