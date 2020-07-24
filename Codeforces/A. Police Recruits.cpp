#include <bits/stdc++.h>
#define endl "\n"
#define pi acos(-1)
#define faster_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main()
{
    //freopen("/home/sohel/Documents/my_codes/out.txt", "wt", stdout);
    faster_io;
    int n, untreated = 0, hired = 0;
    cin>>n;
    int ar[n];
    for(int i = 0; i < n; i++) {
        cin>>ar[i];
    }
    for(int i = 0; i < n; i++) {
        if(ar[i] > 0)
            hired += ar[i];
        else if(ar[i] == -1) {
            if(hired == 0)
                untreated++; 
            else
                hired--;
        }
    }
    cout<<untreated<<endl;

    return 0;
}