#include <bits/stdc++.h>

using namespace std;
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,x=0;
    cin>>t;
    for(int i = 0; i < t; i++)
    {
        int j = 0,cntp = 0, cntm = 0;
        string s;
        cin>>s;
        
        if((s[j+1] == '+' && s[j+2] == '+') || (s[j] == '+' && s[j+1] == '+'))
            cntp++;
        else if((s[j+1] == '-' && s[j+2] == '-') || (s[j] == '-' && s[j+1] == '-'))
            cntm++;
        if(cntp)
        {
            x++;
            //cout<<"cntp "<<cntp<<endl;
        }
        else if(cntm)
        {
            x--;
            //cout<<"cntm "<<cntm<<endl;
        }
        //cout<<x<<endl;
    }
    cout<<x<<endl;
}