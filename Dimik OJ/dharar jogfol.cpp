#include <iostream>

using namespace std;

int main() {
    int n, t;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = n; i >= 0; i--) {
            if (i == 1) {
                cout << "2 + ";
            } else if (i == 0)
                cout << '1' << endl;
            else
                cout << "2^" << i << " + ";
        }
    }

    return 0;
}
