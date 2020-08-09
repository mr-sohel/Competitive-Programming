//http://codeforces.com/contest/34/problem/B

#include <bits/stdc++.h>
#include <sstream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m,n,sum = 0;
    cin>>n>>m;
    int ar[n];
    for(int i = 0; i < n; i++)
        cin>>ar[i];
    sort(ar, ar+n);
    for(int i = 0; i < m; i++)
    {
        if(ar[i] <= 0)
            sum += ar[i];
    }
    cout<<abs(sum)<<endl;
    return 0;
}
