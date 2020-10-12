#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    double a[128 * 1024];
    int k = 0, count = 0;
    while (cin >> n) {
        count++;
        a[k] = sqrt(n);
        k++;
    }
    for (k = count - 1; k >= 0; k--) {
        printf("%.4lf\n", a[k]);
    }
    return 0;
}