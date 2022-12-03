#include <bits/stdc++.h>

using namespace std;

int main() {
    //freopen("out.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        set<string> st;
        while (n--) {
            string s;
            cin >> s;
            st.insert(s);
        }
        for (auto x : st)
            cout << x << endl;

    }
    return 0;
}
