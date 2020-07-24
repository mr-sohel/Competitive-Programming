#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,kase = 1;
    long long n,m;
    cin>>t;
    while(t--)
    {
        bool check = false;
        cin>>m>>n;
        long long sum = 0, a[n];
        for(int i = 0; i < n; i++)
        {
            cin>>a[i];
            sum += a[i];
        }
        for(int i = 0; i < n; i++)
        {
            if(a[i+1] - a[i] == 1)
            {
                check = true;
                break;
            }
        }

        if(sum == m)
        {
            if(check)
                cout<<"Case "<<kase<<": "<<"Thank You BACS!!! "<<"Thik ache. Yes"<<endl;
            else
                cout<<"Case "<<kase<<": "<<"Thank You BACS!!! "<<"Thik ache. No"<<endl;

        }
        else
        {
            if(check)
                cout<<"Case "<<kase<<": "<<"Thank You BACS!!! "<<"Bojjat dokandar!! Yes"<<endl;
            else
                cout<<"Case "<<kase<<": "<<"Thank You BACS!!! "<<"Bojjat dokandar!! No"<<endl;
        }
        kase++;        
    }
    return 0;
}