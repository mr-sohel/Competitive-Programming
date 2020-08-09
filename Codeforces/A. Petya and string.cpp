#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int i,j;
    for(i = 0; i < s1.size(); i++)
    {
        if(s1[i] >= 'A'  && s1[i] <= 'Z' )
        {
            s1[i] = tolower(s1[i]);
        }
        if(s2[i] >= 'A'  && s2[i] <= 'Z')
        {
            s2[i] = tolower(s2[i]);
        }
    }
    if(strcmp(s1.c_str(),s2.c_str()) == 0)
        cout<<'0'<<endl;
    else if(strcmp(s1.c_str(),s2.c_str()) == -1)
        cout<<"-1"<<endl;
    else if(strcmp(s1.c_str(),s2.c_str()) == 1)
        cout<<'1'<<endl;
}
