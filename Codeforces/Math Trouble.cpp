#include <bits/stdc++.h>

using namespace std;

int main()
{
    int kase =1, t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        char ch;
        cin>>a>>b>>ch;
        if(ch == '+')
            cout<<"Case "<<kase<<": "<<a+b<<endl;
        else if(ch == '-')
           cout<<"Case "<<kase<<": "<<(a-b)<<endl;
        else if(ch == '*')
            cout<<"Case "<<kase<<": "<<(a*b)<<endl;
        else if(ch == '/')
        {
            cout<<"Case "<<kase<<": "<<(a/b)<<endl;
        }
        else if(ch == '%')
            cout<<"Case "<<kase<<": "<<(a%b)<<endl;
        kase++;
    }
    return 0;
}