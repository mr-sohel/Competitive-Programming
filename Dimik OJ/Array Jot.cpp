/**
 *    Author:  Sohel Rana
 *    Date:    2020-10-23 09:55:34
 *    Link:    link
**/
#include <bits/stdc++.h>
#define endl '\n'
#define db double
#define ld long double
#define ll long long
#define ull unsigned long long
#define sqr(x) (x) * (x)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a / gcd(a, b)) * b)
#define pf(x) push_front(x)
#define pb(x) push_back(x)
#define eb(x) emplace_back(x)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)x.size()
#define debug(x) cerr << #x << " = " << (x) << endl
#define debug2(x, y) cerr << #x << " = " << (x) << "," << #y << " = " << (y) << endl
#define unsyncIO ios_base::sync_with_stdio(0); cin.tie(0);

const ld PI = acos((ld) - 1);
const int MOD = 1e9 + 7;
const ll INF = 1e18;

using namespace std;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    int t;
    cin >> t;
    while (t--) {
        vector<int> sorted;
        int n1, n2;
        cin >> n1;

        for (int i = 0; i < n1; i++) {
            int temp;
            cin >> temp;
            sorted.eb(temp);
        }
        cin >> n2;

        for (int i = 0; i < n2; i++) {
            int temp;
            cin >> temp;
            sorted.eb(temp);
        }
        sort(all(sorted));
        cout << sorted[0];
        for (int i = 1; i < sz(sorted); i++) {
            cout << " " << sorted[i];
        }
        cout << endl;
    }

    return 0;
}
