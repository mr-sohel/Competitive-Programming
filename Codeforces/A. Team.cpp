#include <bits/stdc++.h>

using namespace std;
int main()
{
    int tc,n,i,j,ck,check = 0;
    int arr[3];
    cin>>tc;
    while (tc--)
    {
        for(i = 0; i < 3; i++)
            cin>>arr[i];
        for(i = 0; i < 3; i++)
        {
            if(arr[i] == 1)
                ck++;
        }
        if(ck >= 2)
            check++;
        ck = 0;
    }
    cout<<check<<endl;
}
