#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main()
{
    int t;
    string s;
    cin>>t;
    getchar();
    
    for(int kase = 1; kase <= t; kase++)
    {   
       
        getline(cin, s);
        for(int i = 0; i < s.length(); i++)
        {
            if(islower(s[i]))
            {
                s[i] = toupper(s[i]);
            }
        }
        cout<<"Case "<<kase<<": "<<s<<endl;
    }
    return 0;
}