#include <bits/stdc++.h>

#include <sstream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c, t, kase = 1;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c;
        if ((a > b && a < c) || (a > c && a < b))
            cout << "Case " << kase << ": " << a << '\n';
        else if ((b > a && b < c) || (b > c && b < a))
            cout << "Case " << kase << ": " << b << '\n';
        else
            cout << "Case " << kase << ": " << c << '\n';
        kase++;
    }
    return 0;
}
