#include <bits/stdc++.h>
#define endl "\n"
#define pi acos(-1)
#define faster_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main()
{
    //freopen("/home/sohel/Documents/my_codes/out.txt", "wt", stdout);
    set<int> s;
    //set<int>::iterator it;

    int temp;
    for (int i = 0; i < 4; i++){
        cin >> temp;
        s.insert(temp);
    }
    // for (it = s.begin(); it != s.end(); it++)
    // {
    //     cout << *it << endl;
    // }
    cout << 4 - s.size();

    return 0;
}