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

// bool check(string s) {
//     string st = "hackerrank";
//     if(s.length() < st.length()) {
//         cout << "NO" << endl;
//         return false;
//     }
//     int cnt = 0;
//     for (int i = 0; i < s.length(); i++) {
//         if(cnt < st.length() && s[i] == st[cnt])
//             cnt++;
//     }
//     if(cnt == st.length())
//         return true;
//     else
//         return false;
// }

int main()
{
    //freopen("/home/taalpatar_shepai/Documents/my_codes/out.txt", "w", stdout);
    int n;
    cin >> n;
   
    while (n--) {
        string s;
        string st = "hackerrank";
        cin >> s;
        if(s.length() < st.length()){
            cout << "NO" << endl;
            break;
        }
        int j;
        int cnt = 0, temp = 0;
        for (int i = 0; i < st.length(); ) {
            for (j = temp; j < s.length(); j++) {
                if(st[i] == s[j]) {
                    cnt++;
                    j++;
                    temp = j;
                    i++;
                    break;
                }
            }
            if (j >= s.length())
                break;
        }
        if(cnt == 10)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}


