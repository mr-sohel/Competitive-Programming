#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        for(int i = 0; i < s.length(); i++)
        {
            int t = s[i] - 'A';
            t++;
            cout<<t;
        }
        cout<<endl;
    }
    return 0;
}