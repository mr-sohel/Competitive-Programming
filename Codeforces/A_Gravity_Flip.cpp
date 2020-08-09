#include <bits/stdc++.h>
#define endl "\n"
#define pi acos(-1)
#define faster_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
    //freopen("/home/sohel/Documents/My Repository/my_codes/out.txt", "wt", stdout);
    faster_io;
    int n, temp;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        a.push_back(temp);
    }
    sort(a.begin(), a.end());

    for (int i = 0; i < n; i++)
    {
        if (i != n - 1)
            cout << a[i] << ' ';
        else
            cout << a[i] << endl;
    }

    return 0;
}