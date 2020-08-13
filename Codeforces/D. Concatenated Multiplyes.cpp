#include <bits/stdc++.h>
#include <sstream>
// WA solution
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i ,d, j;
    long long n,k,count = 0;
    cin>>n>>k;
    string a[n];
    for( i = 0; i < n ;i++)
        cin>>a[i];
    for( i = 0; i < n ;i++)
    {
        for(j = 0; j < n; j++)
        {
            if(i != j)
            {
                string s = a[i] + a[j];
                long long temp = 0;
                for( d = 0; d < s.size(); d++)
                {
                    temp = temp * 10 + (s[d] - '0');
                }
                if(temp % k == 0)
                {
                    count++;
                } 
            }
        }
    }
    cout<<count<<'\n';
    return 0;
}