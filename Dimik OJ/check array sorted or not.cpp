#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,i,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(i = 0; i < n; i++)
            cin>>a[i];
        if(is_sorted(a,a+n))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            int flag = 0;
            for(i = 1; i < n; i++)
            {
                if(a[i] > a[i-1])
                {
                    flag = 1;
                }
            }
            if(flag == 0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}