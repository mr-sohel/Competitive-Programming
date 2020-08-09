#include <bits/stdc++.h>

using namespace std;
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,kase = 1;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
         cout<<"Case "<<kase<<":"<<endl;
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= i; j++)
                cout<<j;
            cout<<endl;
        }
        kase++;
    }
    
    return 0;
}
