#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, ans;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++)
       cin>>a[i];
    for(int i = 0; i < n; i++)
    {
        ans = 1;
        for(int j = 0; j < n; j++)
        {
            if(j != i)
            ans *= a[j];
        }
        cout<<ans;
        if(i < n-1)
            cout<<" ";
    }
    cout<<"\n";
    
    return 0;
}