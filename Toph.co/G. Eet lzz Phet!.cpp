#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,m;
    vector <string> v;
    string s;
    cin>>t;
    for(j  = 0; j < t; j++)
    {
        cin>>s;
        v.push_back(s); 
    }
    sort (v.begin(), v.end());
    cin>>m;
    for(i = 0; i < m; i++)
    {
        cin>>s;
        if(binary_search (v.begin(), v.end(), s))
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    
}