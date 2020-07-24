#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,count = 0;
    cin>>t;
    int ar[t];
    for(int i = 0; i < t; i++)
        cin>>ar[i];
    for(int i = 0; i < t; i++)
    {
        for(int j = i+1; j < t; j++)
        {
            if(ar[i] == ar[j])
            {
                ar[i] = 0; 
                break;
            }
        }
    }
    for(int i = 0; i < t; i++)
    {
        if(ar[i] != 0)
            count++;
    }
    cout<<count<<endl;
    for(int i = 0; i < t; i++)
    {
        if(ar[i] != 0)
            cout<<ar[i]<<" ";
    }
        
    return 0;
}
