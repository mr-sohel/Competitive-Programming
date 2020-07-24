#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;
    cin>>t;
    int kase = 1;
    while(t--)
    {
       
        cin>>n;
        cout<<"Case "<<kase<<":"<<endl;
        kase++;
        for(int i = 1; i <= 10; i++)
            cout<<n<<" * "<<i<<" = "<<i*n<<endl;
    }
    return 0;
}