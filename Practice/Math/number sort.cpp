#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,c,t;
    cin>>t;
    while(t--)
    {
        cin>>c;
        double arr[c];
        for (i = 0; i < c; i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr + c);
        for (i = 0; i < c; i++)
        {
            cout<<arr[i];
            if (i+1 != c)
                printf(",");
        }
        printf("\n");
    }
    return 0;
}
