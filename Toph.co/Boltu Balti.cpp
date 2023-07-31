#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long int s1,s2,n,i,temp,m,sum = 0;
    while(cin>>n>>m)
    {
        if(n > m)
        {
            temp = n;
            n = m;
            m = temp;
        }
        for (i = n;i <= m; i++)
        {
            sum += i;
        }
        cout<<"Sum of "<<n<<" to "<<m<<" is -> "<<sum<<";"<<endl;
        sum = 0;
    }
    return 0;

}
