#include <bits/stdc++.h>
#define endl         '\n'

using namespace std;


int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long n, m, a;
    cin >> n >> m >> a;
    if (n % a != 0)
        n = (n / a) + 1;
    else
        n = (n / a);
    if (m % a != 0)
        m = (m / a) + 1;
    else
        m = (m / a);
    cout << m * n << endl;

    return 0;
}
