#include <bits/stdc++.h>
#include <sstream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin>>tc;
   
    while(tc--)
    {
        string s;
        cin>>s;
        int length = s.length();
        if(s[length-1] == '5' && s[length - 2] == '3')
            cout<<"-"<<endl;
        else if(s[0] == '9' && s[length-1] == '4')
            cout<<"*"<<endl;
        else if(s[0] == '1' && s[1] == '9' && s[2] == '0')
            cout<<"?"<<endl;
        else
            cout<<"+"<<endl;
    }
    return 0;
}