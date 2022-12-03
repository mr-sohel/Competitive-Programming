#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int temphi, templow;
        int a[5];
        for (int i = 0; i < 5; i++)
            cin >> a[i];
        temphi = a[0];
        for (int i = 1; i < 5; i++) {

            if (temphi < a[i]) {
                temphi = a[i];
            }
        }
        templow = a[0];
        for (int i = 1; i < 5; i++) {

            if (templow > a[i]) {
                templow = a[i];
            }
        }
        cout << temphi << ' ' << templow << endl;
    }
    return 0;
}