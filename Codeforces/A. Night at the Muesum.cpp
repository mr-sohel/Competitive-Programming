#include <bits/stdc++.h>
#define endl "\n"
#define pi acos(-1)
#define faster_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

//i could't find the solutin, i had to see the editorial to solve.

int main()
{
    faster_io;
    string name;
    cin>>name;
    int flag = 97, ans = 0;
    for (int i = 0; i < name.length(); i++)
    {
        //int index = name[i] - 97;
        int walk = abs(flag - name[i]);
        if(walk > 13)
            walk = 26 - walk;
        ans += walk;
        flag = name[i];
    }
    cout<<ans<<endl;
    return 0;
}
