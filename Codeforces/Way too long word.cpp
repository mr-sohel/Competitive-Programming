#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    while(n--)
    {
         cin>>s;
         if((s.size() <= 10))
            cout<<s<<endl;
         else
         {
             cout<<s.at(0)<<s.size() - 2<<s.at(s.size()-1)<<endl;
         }
    }
}
