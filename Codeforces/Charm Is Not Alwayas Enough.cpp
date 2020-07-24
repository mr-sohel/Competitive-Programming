//https://algo.codemarshal.org/contests/nhspc-17-national-j/problems/B
//Coder Sohel Rana

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,m,ans = 0;
        cin>>n>>m;
        long long c[n];
        for(int i = 0; i < n ; i++)
            cin>>c[i];
        
        for(int i= 0; i < n;i++)
        {
            int capacity = 0;
            while(true)
            {
                if(capacity >= c[i])
                {
                    break;
                }
                capacity += m;
            }
            ans += (capacity - c[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}