#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,k,ar[26] = {0}, count = 0;
    string s,h;
    cin>>s;
    for(i = 0; i < s.length(); i++)
    {
        ar[s[i] - 'a']++;
    }
    for(i = 0; i < 26; i++)
    {
        if(ar[i] != 0)
            count++;    
    }
    cout<<count<<endl;
    return 0;
}