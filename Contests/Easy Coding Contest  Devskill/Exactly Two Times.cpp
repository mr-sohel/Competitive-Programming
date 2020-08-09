#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>> t;
    while(t--)
    {
        int n, num;
        cin>>n;
        int a[n];
        for(int i = 0; i < n; i = i + 1)
            cin>>a[i];
        sort(a, a+n);
        for(int i = 0; i < n-1; i = i + 1)
        {
            if(a[i] == a[i+1])
            {
                num = a[i];
                break;
            }
        }
        cout<<num<<endl;

    }
    return 0;
}
