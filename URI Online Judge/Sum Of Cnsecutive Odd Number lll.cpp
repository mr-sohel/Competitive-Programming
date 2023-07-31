#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,x,y,i,j,sum = 0;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if (x % 2 != 0)
        {
            for (i = 0,j = x; i < y;j = j + 2,i++)
            {

                    sum += j;
            }
        }
        else
        {
            for (i = 0, j = x + 1; i < y;j = j + 2, i++)
            {
                sum += j;
            }
        }
        cout<<sum<<endl;
        sum = 0;
    }
    return 0;
}
