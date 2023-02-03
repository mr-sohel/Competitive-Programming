#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, i, j, index = 0, ck;
    char ch = '/';
    cin >> t;
    while (t--) {
        cin >> n;
        char name[n][20];
        int g[n];
        for (i = 0; i < n; i++) {
            scanf(" %s", name[i]);
            //getchar();
            scanf("%d", &g[i]);
        }
        for (j = 1; j < n; j++) {
            ck = g[0];
            if (g[j] > ck) {
                index = j;
                ck = g[j];
            }
        }
        cout << "Winner: " << '\\' << name[index] << ch << endl;
    }
}


