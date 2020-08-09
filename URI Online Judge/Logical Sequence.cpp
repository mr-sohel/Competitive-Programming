#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int m = 1; m <= n; m++)
    {
        int i,j;
        i = m *m;
        j = m*m*m;
        cout<<m<<' '<<i<<' '<<j<<endl;
        cout<<m<<' '<<i+1<<' '<<j+1<<endl;
    }
}