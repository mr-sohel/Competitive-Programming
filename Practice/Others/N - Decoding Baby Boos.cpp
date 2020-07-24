#include <bits/stdc++.h>
#include <sstream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,r;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cin>>r;
        while(r--)
        {
            char a,b;
            cin>>a>>b;
            for(long i = 0; i < s.length(); i++)
            {
                if(s[i] == b)
                    s[i] = a;
            }
        }
        cout<<s<<endl;       
    }
    return 0;
}
