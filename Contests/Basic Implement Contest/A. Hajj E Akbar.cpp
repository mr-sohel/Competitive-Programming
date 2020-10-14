#include <bits/stdc++.h>

#include <sstream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    while (true) {
        string s;
        cin >> s;
        if (s == "*")
            break;
        else if (s == "Hajj")
            cout << "Case " << t << ": "
                 << "Hajj-e-Akbar\n";
        else if (s == "Umrah")
            cout << "Case " << t << ": "
                 << "Hajj-e-Asghar\n";
        t++;
    }
    return 0;
}