#include <bits/stdc++.h>

using namespace std;

int main()
{					//4141m,ldleps.as////ss.x,xz
    string s;
    int i,sum = 0,t;
    cin>>t;
    while(t--)
    {
        cin>>s;
        for(i = 0; i < s.size(); i++)
        {
            sum += s.at(i);
        }
        if(sum % 20 == 0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
        sum = 0;
    }
    char ch = getchar();
    return 0;
}
