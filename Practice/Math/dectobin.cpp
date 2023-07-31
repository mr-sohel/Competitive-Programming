#include <bits/stdc++.h>

using namespace std;

void binary(int n)
{
    int a[1000];
    int i = 0;
    while(n > 0)
    {
        a[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        cout<<a[j];
    }
    cout<<endl;
}

int main()
{
    int n;
    cin>>n;
    binary(n);
}
