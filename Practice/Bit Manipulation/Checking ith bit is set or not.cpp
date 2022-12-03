#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, index;
    cin >> N >> index;
    if (N & (1 << index))
        cout << "Set" << endl;
    else
        cout << "Not Set" << endl;
    return 0;
}