#include <bits/stdc++.h>
#include <sstream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int i = 1; i <= t; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a<=20 && b <= 20 && c <= 20)
        {
            cout<<"Case "<<i<<": "<<"good\n";
        }
        else 
            cout<<"Case "<<i<<": "<<"bad\n";
    }
    return 0;
}
