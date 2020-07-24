#include <bits/stdc++.h>

using namespace std;

int main()
{
    int ct,n,k,a,b,s = 0;
    while(scanf("%d %d", &ct,&n)!= EOF)
    {
        while(n--)
        {
            cin>>a;
            s += a;
        }
        if(ct % s == 0)
            b = ct / s;
        else
            b = (ct / s) + 1;
        if(b == 1)
            cout<<"Project will finish within "<<b<<" day."<<endl;
        else
            cout<<"Project will finish within "<<b<<" days."<<endl;
        s = 0;

    }
}
