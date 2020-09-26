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
#define debug(x) 	cerr << #x << " = " << (x) <<endl
#define unsyncIO    ios_base::sync_with_stdio(0); cin.tie(0)

const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const ll INF = 1e18; 

using namespace std;

int main()
{
    //freopen("/home/taalpatar_shepai/Documents/my_codes/out.txt", "w", stdout);
    unsyncIO;
    string s;
    int n;
    cin >> s;
    cin >> n;
    vector<int> q;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        q.eb(t);
    }
    vector<int> v;
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26};
    int temp,cnt = 1;
    for (int i = 0; i < s.length(); i++) {
        temp = arr[s[i] - 'a'];
        v.eb(temp);
        while(1) {
            if(s[i] != s[i+1]) {
                break;
            }
            else {
                cnt++;
                v.eb(temp * cnt);
                i++;
            }
        }
        cnt = 1;
    }
    sort(all(v));
    for (int i = 0; i < n; i++) {
        if(binary_search(all(v),q[i])) {
            cout << "Yes" << endl;
        }
        else
            cout << "No" << endl;
    }

    return 0;
}