#include <bits/stdc++.h>
#define endl '\n'
#define pb push_back
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const int MOD = 1e9 + 7;
const int MX = 2e5 + 5;
const ll INF = 1e18;
const ld PI = acos((ld) - 1);
#define unsyncIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

void rev(char s[]) {
    for (int i = strlen(s) - 1; i >= 0; i--) {
        cout << s[i];
    }
}

int main() {
    //freopen("/home/sohel/Documents/my_codes/out.txt", "wt", stdout);
    int t, i, j;
    char str[1001], word[1001];
    cin >> t;
    while (t--) {

        scanf(" %[^\n]", str);
        for (i = 0, j = 0; i < (int)strlen(str); i++) {
            if (str[i] != ' ') {
                word[j] = str[i];
                j++;
            } else if (j > 0) {
                word[j] = '\0';
                rev(word);
                cout << ' ';
                // printf("%s\n", word);
                j = 0;
            }
        }
        if (j > 0) {
            word[j] = '\0';
            rev(word);
            cout << endl;
            //printf("%s\n", word);
        }
    }

    return 0;
}
