#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int t;
    char s[10001];
    cin >> t;
    while (t--) {
        int ck = 0, count = 0;
        scanf(" %[^\n]", s);
        for (int i = 0; i < strlen(s); i++) {
            if (s[i] >= '0' && s[i] <= '9') {
                if (ck == 0) {
                    count++;
                    ck = 1;
                }
            } else if (s[i] == ' ') {
                ck = 0;
            }
        }
        cout << count << endl;
    }
}