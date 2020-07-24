#include <bits/stdc++.h>
#define endl "\n"
#define pi acos(-1)
#define faster_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main()
{
    faster_io;
    string name;
    cin>>name;
    int start = 0, ans = 0;
    for (int i = 0; i < name.length(); i++)
    {
        int index = name[i] - 97;
        int walk = abs(start - index);
        if(walk > 13)
            ans += 26 - walk;
        else
            ans += index;
        start = index;
    }
    cout<<ans<<endl;
    return 0;
}
