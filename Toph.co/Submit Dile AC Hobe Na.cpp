#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, count = 0;;
    cin>>n;
    int a1[n], a2[n];
    for(int i = 0; i < n; i++)
    {
        cin>>a1[i];
    }
    for(int i = 0; i < n; i++)
    {
        cin>>a2[i];
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n ;j++)
        {
            if(a1[i] == a2[j])
                count++;
        }
    }
    cout<<count<<endl;
    return 0;
}