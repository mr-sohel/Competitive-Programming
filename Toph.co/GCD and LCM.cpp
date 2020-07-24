#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a,b,lcm = 0;
    int t;
    cin>>t;
    while(t--)
    {
        lcm = 0;
        cin>>a>>b;
       if(__gcd(a,b) == 1)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}