#include <bits/stdc++.h>
#define endl "\n"
#define pi acos(-1)
#define faster_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    //freopen("/home/sohel/Documents/My Repository/my_codes/out.txt", "wt", stdout);
    faster_io;
    string temp;
    int t,m,n;
    cin>>t;
    while(t--) {
        set <string> s;
        cin>>m>>n;
        for(int i = 0; i < n; i++) {
            cin>>temp;
            s.insert(temp);
        }
        cout<<s.size() - m<<endl;
    }
    return 0;
}