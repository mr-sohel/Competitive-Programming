#include <bits/stdc++.h>

using namespace std;

int main() {
    int h, l;
    cin >> h >> l;
    h--;
    l--;
    swap(h, l);
    cout << h << ' ' << l << endl;
    return 0;
}