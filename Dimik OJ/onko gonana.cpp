#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    int i, t;
    cin >> t;
    while (t--) {
        int count = 0, ck = 0;
        cin >> s;
        int length = s.length();
        for (i = 0; i < length; i++) {
            if (s[i] == '0')
                count++;
        }
        if (length == count) {
            cout << '1' << endl;
        } else {
            count = 0;
            for (i = 0; i < s.length(); i++) {
                if (s[i] == '0') {
                    if (ck == 0) {
                        continue;
                    } else {
                        count++;
                        ck = 1;
                    }
                } else {
                    count++;
                    ck = 1;

                }
            }
            cout << count << endl;
        }

    }
    return 0;

}