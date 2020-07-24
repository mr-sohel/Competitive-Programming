#include <bits/stdc++.h>
#define endl "\n"
#define pi acos(-1)
#define faster_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main()
{
    //freopen("/home/sohel/Documents/my_codes/out.txt", "wt", stdout);
    faster_io;
    int n, cnt_rep = 0, cnt = 0;
    cin >> n;
    int h[n], a[n];
    for (int i = 0; i < n; i++) {
        cin >> h[i] >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (h[i] == a[j])
                cnt++;
            if(a[i] == h[j])
                cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}