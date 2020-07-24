#include <bits/stdc++.h>

using namespace std;

unsigned long long fect(int n)
{
    unsigned long long f = 1;
    for(int i = 1; i <= n;i++)
        f *= i;
    return f;

}

int main()
{
    unsigned long long f1,f2;
    int n1,n2;
    while(cin>>n1>>n2)
    {
        f1 = fect(n1);
        f2 = fect(n2);
        cout<<f1+f2<<endl;
    }
    return 0;

}
