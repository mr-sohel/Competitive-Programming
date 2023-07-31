#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    for (i = 7; i >=1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout<<'S';
        }
        cout<<endl;
    }
    for(i = 2; i <= 7; i++)
    {
        for (j = 1;j <= i; j++)
        {
            cout<<'S';
        }
        cout<<endl;
    }
}
