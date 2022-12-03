#include <iostream>

using namespace std;

int main() {
    int t;
    long long n, pn[8] = {6, 28, 496, 8128, 33550336, 8589869056, 137438691328};
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0 ; i < 8 ; i++) {
            if (pn[i]  <= n )
                cout << pn[i] << endl;
            else
                break;
        }
        cout << endl;
    }
    return 0;
}