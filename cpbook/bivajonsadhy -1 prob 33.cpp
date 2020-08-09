#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a,b,c;
    int i,t,temp;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        for(i = a; i <= b; i++)
        {
            if(i % c == 0)
            {
                temp = i;
                break;
            }
        }
        for(i = temp; i <= b; i += c)
            cout<<i<<endl;
    }
    return 0;
}