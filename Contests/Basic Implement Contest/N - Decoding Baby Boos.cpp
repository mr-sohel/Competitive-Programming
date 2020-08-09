#include <bits/stdc++.h>
#include <sstream>

using namespace std;
int ar[26];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,r;
    cin>>t;
    for(int i = 1; i <= 26; i++)
        ar[i] = i;
    while(t--)
    {
        string s;
        cin>>s;
        cin>>r;
        while(r--)
        {
            char a,b;
            cin>>a>>b;
        }
        cout<<s<<endl;       
    }
    return 0;
}
