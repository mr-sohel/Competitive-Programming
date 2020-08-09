#include <bits/stdc++.h>
#include <sstream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    long long k, account = 0;
    cin>>t;
    while(t--)
    {
        long long temp;
        string s;
        cin>>s;
        if(s == "donate")
        {
            cin>>temp;
            account += temp;
        }
        else if(s == "report")
        {
            cout<<account<<'\n';
        }
    }
    return 0;
}