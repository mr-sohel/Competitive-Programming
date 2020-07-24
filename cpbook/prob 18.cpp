#include <iostream>

using namespace std;
int main()
{
    int t, r,a,b;
    cin>>t;
    while(t--)
    {
        cin>>r>>a>>b;
        if((2*r) <= a && (2*r) <= b)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}