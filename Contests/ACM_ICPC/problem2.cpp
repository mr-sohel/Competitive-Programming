#include <bits/stdc++.h>
#define rtn return 0
#define ll long long
#define Pas printf("PASS\n")
#define MX 1000000000
#define ull unsigned long long
#define pf printf
#define sf scanf
#define f2(i, b) for (int i = 0; i < (b); i++)
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        int c, r, count = 0;
        cin >> c >> r;
        if (c + 1 <= 8 && c + 1 >= 1 && r + 2 >= 1 && r + 2 <= 8)
            count++;
        if (c - 1 <= 8 && c - 1 >= 1 && r + 2 >= 1 && r + 2 <= 8)
            count++;
        if (c + 1 <= 8 && c + 1 >= 1 && r - 2 >= 1 && r - 2 <= 8)
            count++;
        if (c - 1 <= 8 && c - 1 >= 1 && r - 2 >= 1 && r - 2 <= 8)
            count++;
        if (c + 2 <= 8 && c + 2 >= 1 && r + 1 >= 1 && r + 1 <= 8)
            count++;
        if (c - 2 <= 8 && c - 2 >= 1 && r + 1 >= 1 && r + 1 <= 8)
            count++;
        if (c + 2 <= 8 && c + 2 >= 1 && r - 1 >= 1 && r - 1 <= 8)
            count++;
        if (c - 2 <= 8 && c - 2 >= 1 && r - 1 >= 1 && r - 1 <= 8)
            count++;
        pf("Case %d: %d\n", i, count);
    }
    rtn;
}