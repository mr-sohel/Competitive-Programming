#include <bits/stdc++.h>
#include <sstream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int ball = 0;
        cin>>s;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] != 'N' && s[i] != 'W' && s[i] != 'D')
                ball++;   
        }
        if(ball < 6)
            cout<<ball<<" BALLS"<<endl;
        else if(ball == 6)
        {
            cout<<ball<<" BALLS"<<endl;
            cout<<"1 OVER"<<endl;
        }
        else if(ball > 6)
        {
            cout<<ball<<" BALLS"<<endl;
            cout<<(ball / 6)<<" OVER "<<(ball % 6)<<" BALLS"<<endl;
        }
    }
    return 0;
}
