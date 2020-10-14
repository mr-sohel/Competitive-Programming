#include <bits/stdc++.h>

#include <sstream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, zeros = 0, t = 1;
    while (true) {
        cin >> n;
        zeros = 0;
        if (n == 0)
            break;

        else {
            for (int i = 0; i < n; i++) {
                int temp;
                cin >> temp;
                if (temp == 0) {
                    zeros++;
                    //cout<<zeros<<endl;
                }
            }
            cout << "Case " << t << ": " << (n - zeros) - zeros << '\n';
            t++;
        }
    }
    return 0;
}
