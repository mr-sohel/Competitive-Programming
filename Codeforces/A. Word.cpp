//http://codeforces.com/problemset/problem/59/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int upper = 0, lower = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(islower(s[i]))
            lower++;
        else if(isupper(s[i]))
            upper++;
    }
    if(upper == lower)
    {
        transform(s.begin(),s.end(), s.begin(),::tolower);
        cout<<s<<endl;
    }
    else if(lower > upper)
    {
        transform(s.begin(),s.end(), s.begin(),::tolower);
        cout<<s<<endl;
    }
    else
    {
        transform(s.begin(),s.end(), s.begin(),::toupper);
        cout<<s<<endl;
    }
    return 0;
}