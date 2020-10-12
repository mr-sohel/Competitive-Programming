#include <bits/stdc++.h>

using namespace std;

int main() {
    //freopen("/home/sohel/Desktop/CPP Codes/out.txt", "wt", stdout);
    vector<int> v;
    int k, n;
    cin >> n;
    while (n--) {
        int sq = sqrt(2147483647);
        cin >> k;
        int loc = 1;
        for (int i = 1; i <= sq; i++) {
            v.push_back(1 + ((i * (i - 1) / 2)));
        }
        if (binary_search(v.begin(), v.end(), k))
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }

    return 0;
}