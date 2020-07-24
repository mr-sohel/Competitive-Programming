#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define pi acos(-1)
int main()
{
    //freopen("/home/sohel/Desktop/CPP Codes/out.txt", "wt", stdout);
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL); // for faster I/O
    //cout.tie(NULL);

    int n, h, cnt = 0;
    cin>>n>>h;

    int arr[n];
    for(int i = 0; i < n; i++)
        cin>> arr[i];
    for(int i = 0; i < n; i++)
    {
        if(arr[i] <= h)
            cnt += 1;
        else
            cnt += 2;`
    }

    cout<<cnt<<endl;

    return 0;
}