#include <bits/stdc++.h>
#define endl "\n"
#define pi acos(-1)
#define faster_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main()
{
    //freopen("/home/sohel/Documents/my_codes/out.txt", "wt", stdout);
    faster_io;
    string s, t;
    cin >> s >> t;
    int i, j, tlength = t.length();
    for (i = 0, j = 0; j < tlength; ) {
        if(s[i] == t[j])
            i++, j++;
        else
            j++;
    }
        cout << i + 1 << endl;
    return 0;
}