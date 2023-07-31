#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,i,j,sum = 0;
    while(1)
    {
        cin>>t;
        if (t == 0)
            return 0;
        else
        {
            if (t % 2 == 0)
            {
                for (i = t,j = 1; j <= 5;j++, i = i + 2)
                {
                    sum += i;
                }
            }
            else
            {
                for (i = t+1,j = 1; j <= 5;j++, i = i + 2)
                {
                    sum += i;
                }
            }
        }
        cout<<sum<<endl;
        sum = 0;
    }
    return 0;
}
