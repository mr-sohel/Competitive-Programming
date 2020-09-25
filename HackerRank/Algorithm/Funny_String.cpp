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
    int t;
    cin >> t;
   
    while(t--) {
         string s2, s;
        cin >> s2;
        s = s2;
        reverse(all(s2));
        vector<int> v_s;
        vector<int> v_s2;
        for (int i = 0; i < s.length()-1; i++) {
            int temp;
            temp = abs(s[i] - s[i + 1]);
            v_s.eb(temp);
            temp = abs(s2[i] - s2[i + 1]);
            v_s2.eb(temp);
        }
        bool check = false;
        for (int i = 0; i < v_s.size(); i++) {
            if(v_s[i] != v_s2[i]) {
                check = true;
                break;
            }
        }
        if(!check)
            cout << "Funny" << endl;
        else
            cout << "Not Funny" << endl;
    }
    return 0;
}