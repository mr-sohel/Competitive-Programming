#include <iostream>

using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        if (n % 2 == 0)
            cout << "red" << endl;
        else
            cout << "blue" << endl;
    }
    return 0;
}