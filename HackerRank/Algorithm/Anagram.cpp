#include <bits/stdc++.h>

using namespace std;

// Complete the anagram function below.
int anagram(string s) {
    int first[26] = {0}, second[26] = {0};
    int ans = 0;
    if (s.length() % 2 == 1)
        return -1;
    else {
        int len = s.length();
        for (int i = 0; i < len / 2; i++) {
            first[s[i] - 'a']++;
        }

        for (int j = len / 2; j < len; j++) {
            second[s[j] - 'a']++;
        }

        for (int i = 0; i < 26; i++) {
            if (first[i] > second[i]) {
                ans += first[i] - second[i];
            }
        }
    }
    return ans;
}

int main() {

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = anagram(s);

        cout << result << "\n";
    }

    return 0;
}
