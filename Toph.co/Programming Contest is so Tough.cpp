#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;
        if(s == "AdHoc")
            cout<<"1"<<endl;
        else if(s == "DataStructures")
            cout<<"2"<<endl;
        else
            cout<<"3"<<endl;
    }    
    return 0;
}
