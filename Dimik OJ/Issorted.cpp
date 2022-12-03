#include <iostream>

using namespace std;

bool is_a(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            return false;
        }
    }
    return true;

}
bool is_d(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] < a[i + 1])
            return false;
    }
    return true;
}
int main() {
    int t, i;
    int n;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        int a[n];
        for (i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        if (is_a(a, n))
            cout << "YES" << endl;
        else {
            if (is_d(a, n))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}