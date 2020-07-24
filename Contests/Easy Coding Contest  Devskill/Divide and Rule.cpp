#include <bits/stdc++.h>

using namespace std;
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int num, n;
        cin>>n;
        if(n == 1)
            cout<<"3"<<endl;
        else if(n == 2)
            cout<<"12"<<endl;
        else
        {
            cout<<1;
            for(int i = 0; i < n-2; i++)
                cout<<'0';
            cout<<"2"<<endl;
        }
    }
    return 0;
}