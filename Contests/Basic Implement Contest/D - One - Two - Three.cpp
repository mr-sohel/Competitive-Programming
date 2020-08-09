#include <bits/stdc++.h>
#include <sstream>

using namespace std;
bool isone(string s)
{
    int count = 0;
    string temp1 = "one";
    for(int i = 0; i < 3; i++)
    {
        if(temp1[i] == s[i])
            count++;
    }
    if(count >= 2)
        return true;
    else
        return false;
}
bool istwo(string s)
{
    int count = 0;
    string temp1 = "two";
    for(int i = 0; i < 3; i++)
    {
        if(temp1[i] == s[i])
            count++;
    }
    if(count >= 2)
        return true;
    else
        return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        bool one = false, two = false;
        string s;
        cin>>s;
        if(s.length() == 3)
        {
            one = isone(s);
            two = istwo(s);
            if(one)
                cout<<"1\n";
            else if(two)
                cout<<"2\n";
        }
        else if(s.length() > 3)
            cout<<3<<'\n';
    }
    return 0;
}