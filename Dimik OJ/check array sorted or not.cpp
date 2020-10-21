#include <bits/stdc++.h>


using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> V(n);
    for (int i = 0; i < n; i++) {
        cin >> V[i];
    }
    if(is_sorted(V.begin(), V.end()))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}