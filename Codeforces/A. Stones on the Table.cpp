#include <bits/stdc++.h>
#define endl "\n"
#define pi acos(-1)
#define faster_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main()
{
    faster_io;
    //freopen("/home/sohel/Documents/my_codes/out.txt", "wt", stdout);
    int min_count = 0,n;
    cin>>n;
    string s;
    cin>>s;
    for(int i = 0; i < n; i++) {
        if(s[i] == s[i+1])
            min_count++;
    }
    cout<<min_count<<endl;
    
    return 0;
}