#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, bi1, bi2, pi1, pi2, count = 0;
    cin >> t;
    while (t--) {
        int tc = 2;
        while (tc--) {
            cin >> bi1 >> bi2 >> pi1 >> pi2;
            if ((bi1 + bi2) > (pi1 + pi2))
                count++;
        }
        if (count == 2)
            cout << "Banglawash" << endl;
        else
            cout << "Miss" << endl;
        count = 0;
    }
    return 0;

}
