#include <bits/stdc++.h>
#define unsyncIO                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)

using namespace std;
bool isball(char ch)
{
    if (ch == 'O')
        return true;
    int a = ch - '0';
    return (a >= 0 && a <= 6);
}
int main()
{
    unsyncIO;
    int tc, a, o, b, i;
    cin >> tc;
    getchar();
    string str;
    while (tc--)
    {
        cin >> str;
        a = 0;
        for (i = str.size() - 1; i >= 0; i--)
        {
            if (isball(str[i]))
                a++;
        }
        if (a < 6)
        {
            if (a >= 2)
                cout << a << " BALLS" << endl;
            else
                cout << a << " BALL" << endl;
        }

        else
        {
            o = a / 6;
            b = a % 6;
            if (b < 1 && o < 2)
                cout << o << " OVER" << endl;
            else if (b < 1 && o > 2)
                cout << o << " OVERS" << endl;
            else if (b == 1 && o == 1)
            {
                cout << o << " OVER " << b << " BALL" << endl;
            }
            else if (b > 1 && o == 1)
                cout << o << " OVER " << b << " BALLS" << endl;
            else if (b > 1 && o > 1)
                cout << o << " OVERS " << b << " BALLS" << endl;
        }
    }
    return 0;
}