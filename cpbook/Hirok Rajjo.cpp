#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,n,m,t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for( i = 0; i < n; i++)
        {
            for(j = 0; j < i; j++)
                cout<<m;
            cout<<endl;
        }
        for( int l = i - 1; l >= 0; l--)
        {
            for(int k = l; k >= 0; k--)
                cout<<m;
            cout<<endl;
        
        }
    }
    
     
	return 0;
}
