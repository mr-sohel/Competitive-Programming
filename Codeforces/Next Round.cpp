#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,cnt = 0;
    cin>>n>>k;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin>>arr[i];
    int val = arr[k-1];
    for(int i = 0; i < n; i++)
    {
        if(arr[i] >= val && arr[i] != 0)
            cnt++;
    }
    cout<<cnt<<endl;
	return 0;
}
