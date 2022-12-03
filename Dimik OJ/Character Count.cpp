#include <bits/stdc++.h>

using namespace std;

int main() {
    int i, t;
    cin >> t;
    while (t--) {
        vector<char> vec;
        map<char, int> count;
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++) vec.push_back(s[i]);
        for (i = 0; i < s.size(); i++) {
            count[s[i]]++;
        }
        for (int i = 0; i < vec.size(); i++) {
            if (count[vec[i]] != -1) {
                cout << vec[i] << " = " << count[vec[i]] << endl;
                count[vec[i]] = -1;
            }
        }
        if (t >= 1)
            cout << "\n";
    }
    return 0;
}