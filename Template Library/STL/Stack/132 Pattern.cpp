#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 5;

int a[N], Right[N], Left[N];

void solve() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    // Greatest from the right smaller than nums[j]
    multiset<int> st;
    for (int i = n; i >= 1; i--) {
        auto it = st.lower_bound(a[i]);
        if (it == st.begin()) {
            Right[i] = INT_MAX;
        } else {
            it--;
            Right[i] = *it;
        }
        st.insert(a[i]);
    }
    //Smallest from the left
    int MIN = INT_MAX;
    for (int i = 1; i <= n; i++) {
        Left[i] = MIN;
        MIN = min(MIN, a[i]);
    }
    bool flag = false;
    for (int j = 1; j <= n; j++) {
        int jvalue = a[j];
        int ivalue = Left[j];
        int kvalue = Right[j];
        if (ivalue < kvalue and kvalue < jvalue) {
            flag = true;
            break;
        }
    }
    if (flag)
        cout << "True" << endl;
    else
        cout << "False" << endl;
}

int main() {
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
