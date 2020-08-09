#include <bits/stdc++.h>
#define endl "\n"
#define pi acos(-1)
#define faster_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main()
{
    //freopen("/home/sohel/Documents/my_codes/out.txt", "wt", stdout);
    faster_io;
    int n, cnt = 0;
    cin>>n;
    vector<string> str;
    string temp;
    for(int i = 0; i < n; i++) {
        cin>>temp;
        str.push_back(temp);
    }
    for(int i = 0; i < n; i++) {
        if(str[i] != str[i+1]) {
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}