#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s,age, pore,tcpy,t;
    long n,m,j,pos;
    cin>>n>>m;
    cin>>s>>t;
    tcpy = t;
    if(n>m)
    {
        if(n - m == 1)
        {
            s.replace(s.find("*"), 1, "");
            if(s == tcpy)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
        else
            cout<<"NO\n"<<endl;
    }
    else if(n == m)
    {
        if(s == tcpy)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    else
    {
        for(long i = 0; i < s.length(); i++)
        {
            if(s[i] == '*')
            {
                pos = i;
                break;
            }
            else     
                age += s[i];
        }
        for(long i = pos+1, j = 0; i < s.length();j++,i++)
            pore += s[i];    
        t.replace(t.find(age), age.length(), "");
        t.replace(t.find(pore), pore.length(), "");
        s.replace(s.find("*"), 1, t);
        if(s == tcpy)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
