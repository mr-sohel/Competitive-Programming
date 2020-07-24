#include <bits/stdc++.h>
#define endl "\n"
#define pi acos(-1)
#define faster_io                \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL);

using namespace std;

int main()
{
    faster_io
        //freopen("/home/sohel/Documents/my_codes/out.txt", "wt", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int i, j;
        string b;
        char a[101] = {"\0"};
        cin >> b;
        if (b.length() == 2)
        {
            cout << b << endl;
        }
        else
        {
            a[0] = b[0], a[1] = b[1];
            for (j = 2, i = 2; i < b.length(); j++)
            {
                a[j] = b[i + 1];
                i = i + 2;
            }
            a[j] = '\0';
            cout << a << endl;
        }
    }
    return 0;
}
