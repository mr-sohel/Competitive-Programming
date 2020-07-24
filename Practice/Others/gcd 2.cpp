#include <bits/stdc++.h>

using namespace std;

int gcd (int n1,int n2)
{
    int reminder;
    //cin>>n1>>n2;
    if(n1 < n2)
        swap(n1,n2);
        
    while(true)
    {
        reminder = n2 % n1;
        if(reminder == 0)
            break;
        else
        {
            n2 = n1;
            n1 = reminder;
        }
    }
    return n1;
}

int main()
{
    int t;
    long long n,sum;
    cin>>t;
    for(int k = 1; k <= t; k++)
    { 
        cin>>n;
        sum = 0;
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= n; j++)
                if((n % i) == 0 && (n % j) == 0)
                    sum += gcd(i,j);
        
        cout<<"Case "<<k<<": "<<sum<<endl;
    }
    return 0;
}