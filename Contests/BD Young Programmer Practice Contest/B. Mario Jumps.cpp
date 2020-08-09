#include <bits/stdc++.h>
#include <sstream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); // for faster i/o
    cin.tie(NULL);
    int t;
    int kase = 1;
    cin>>t;
    while(t--)
    {
        int n,low_jumps = 0, high_jumps = 0;
        cin>>n;
        int ar[n];
        for(int i = 0; i < n; i++)
            cin>>ar[i];
        for(int i = 0; i < n-1; i++)
        {
            if(ar[i+1] > ar[i])
                high_jumps++;
            else if(ar[i+1] < ar[i])
                low_jumps++;
        }
        cout<<"Case "<<kase<<": "<<high_jumps<<' '<<low_jumps<<endl;

        kase++;
    }
    return 0;
}
