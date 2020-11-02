/**
 *	Author:  Sohel Rana
 *	Date:    2020-10-31 21:53:58
 *	Task:    J_Almost_Prime 
**/
#include <bits/stdc++.h>
#define endl        '\n'
#define db          double
#define ld          long double
#define ll          long long
#define ull         unsigned long long
#define sqr(x)      (x) * (x)
#define gcd(a, b)   __gcd(a, b)
#define lcm(a, b)   ((a/gcd(a,b)) * b)
#define pf(x) 		push_front(x)
#define pb(x)       push_back(x)
#define eb(x)		emplace_back(x)
#define all(x)      (x).begin(), (x).end()
#define rall(x) 	(x).rbegin(), (x).rend()
#define sz(x) 		(int)x.size()
#define debug(x) 	cerr << #x << " = " << (x) << endl
#define debug2(x,y) cerr << #x << " = " << (x)<< "," << #y << " = " <<(y)<< endl
#define unsyncIO    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const ll INF = 1e18;
const ld eps = 1.0E-14;

using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if(n % i == 0)
            return false;
    }
    return true;
}

bool divisor(int n ) {
    set<int> st;
    int cnt = 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            st.insert(i);
            st.insert(n / i);
        }
    }
    for (auto it = st.begin(); it != st.end(); it++) {
        if(isPrime(*it))
            cnt++;
    }
    if(cnt == 2)
        return true;
    else
        return false;
}

    int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if(divisor(i))
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}
