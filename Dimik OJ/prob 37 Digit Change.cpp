#include <iostream>
#include <string>

using namespace std;

int main() {
    int t, check;

    cin >> t;
    while (t--) {
        check = 0;
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] % 2 == 0) {
                s[i] = ++s[i];
            } else {
                s[i] = --s[i];
            }
        }
        // cout<<s<<endl;
        int ck = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '0')
                check++;
        }
        if (check == s.length())
            cout << s;
        else {
            for (int i = 0; i < s.length(); i++) {
                if (ck == 0 && s[i] == '0')
                    continue;
                else {
                    cout << s[i];
                    ck = 1;
                }
            }
        }
        cout << endl;
    }
    return 0;
}