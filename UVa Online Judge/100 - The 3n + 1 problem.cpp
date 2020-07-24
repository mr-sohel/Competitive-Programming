#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    cout<<n;
    if(n == 1)
        return 0;
    else
    {
        if(n % 2 != 0)
            n = n*3 + 1;
        else
            n = n/2;
    }
}