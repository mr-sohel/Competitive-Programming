#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen("out.txt", "w", stdout);
    int count = 0, t;
    string s;
    cin >> t;
    //cin.ignore();
    getchar();
    while (t--) {
        //scanf("%[^\n]", ch);
        getline(cin, s);
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
                count++;
            }
        }
        cout << "Number of vowels" << ' ' << '=' << ' ' << count << endl;
        count = 0;
    }
    return 0;
}