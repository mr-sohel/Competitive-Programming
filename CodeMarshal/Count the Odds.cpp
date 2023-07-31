#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long a,b,temp;
    int i,count = 0;
    cin>>a>>b;
    if(a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if (a % 2 == 0)
    {
        for (i = a+1; i <= b; i = i + 2)
        {
                count++;
        }
        cout<<count<<endl;
    }
    else
    {
        for (i = a; i <= b; i = i + 2)
        {
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
