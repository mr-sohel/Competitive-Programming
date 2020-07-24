#include <iostream>

using namespace std;

int main()
{
    int t,x,n;
    cin>>t;
    while(t--)
    {
        cin>>x>>n;
        if(x > n)
        {
            cout<<"Invalid!"<<endl;
            continue;
        }
        else
        {
            for(int i = x; i <= n; i += x)
            {
                //if(i % x == 0)
                    cout<<i<<endl;
            }
            cout<<endl;
        }
    }
}