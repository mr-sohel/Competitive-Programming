#include<bits/stdc++.h>
using namespace std;
int arr[51][100001];
int a[100001];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   ///use "\n" instead of endl otherwise you will get runtime error
    cout.tie(NULL);
    int n,x,i,j,q,l,r,k,count;

    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>x;
        arr[x][i]=1;
    }

  ///  storing the repetation on an array
    for(i=1; i<=50; i++)
    {
        for (j=1; j<=n; j++)
        {
            arr[i][j]+=arr[i][j-1];///CUMSUM
        }
    }

    cin>>q;
    while(q--)
    {
        count=0;
        cin>>l>>r>>k;
        for(i=1;i<=50;i++)
        {
            if(arr[i][r]-arr[i][l-1]>=k)
                count++;
        }
        cout<<count<<"\n";
    }


    return 0;
}