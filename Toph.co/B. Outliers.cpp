#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,kase;
    cin>>t;
    for(kase = 0; kase < t; kase++)
    {
        int n,low,high;
        cin>>n>>low>>high;
        double ar[n], sum = 0.0,Da,Dl,Dh,Db;
        bool check = false;
        for(int i = 0; i < n; i++)
        {    
            cin>>ar[i];
            sum += ar[i];
        } 
        cout<<"Case "<<kase+1<<":"<<endl;
        for(int i = 0; i < n; i++)
        {
            double avg = sum / n;
            Da = abs(ar[i] - avg);
           
            Dl = abs(ar[i] - low);
           
            Dh = abs(ar[i] - high);
           
            Db = min(Dl,Dh);
            if(Db < Da)
            {
                check = true;
                printf("%.2lf\n", ar[i]);
            }
        }
        if(!check)
            cout<<"No outliers"<<endl;
    }
    return 0;
}