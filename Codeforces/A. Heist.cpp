#include <bits/stdc++.h>

using namespace std;
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,count = 0;
    cin>>n;
    vector <long long> ar;
    for(int i = 0; i < n; i++)
    {
        long long temp;
        cin>>temp;
        ar.push_back(temp);
    }
    sort(ar.begin(), ar.end());
    for(int i = 0; i < n-1; i++)
    {
        int tm;
        tm = ar[i+1] - ar[i];
        if(tm > 1)
        {
            count += (ar[i+1] - ar[i])-1;
        }
    }
    cout<<count<<endl;
    22

        return 0;
}
