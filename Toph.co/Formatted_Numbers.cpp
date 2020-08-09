#include <bits/stdc++.h>
#define endl        '\n'
#define pi          2*acos(0.0)
#define pb(a)       push_back(a)
#define db          double
#define ld          long double
#define ll          long long
#define ull         unsigned long long
#define mod         1000000007
#define inf         1000000000000000001
#define sqr(x)      (x) * (x)
#define gcd(a, b)   __gcd(a, b)
#define lcm(a, b)   ((a/gcd(a,b)) * b)
#define debug(x) 	cerr << #x << " = " << (x) <<endl
#define all(x)      (x).begin(), (x).end()
#define unsyncIO    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)


using namespace std;

int main()
{
    //freopen("/home/sohel/Documents/my_codes/out.txt", "wt", stdout);
    unsyncIO;
    string s;
    cin >> s;
    vector<char> ans;
    fill(all(ans), '\n');
    int j = 0;
    if (s.length() > 3) {
        int temp = 0;
        for (int i = s.length() - 1; i >= 0; i--) {
            ans.pb(s[i]);
            temp++;
            if (temp == 3) {
                ans.pb(',');
                temp = 0;
            }
        }
        reverse(all(ans));
        if (s.size() == 9) {
            for (int i = 1; i < ans.size(); i++) {
                cout << ans[i];
            }
        }
        else {
            for (int i = 0; i < ans.size(); i++) {
                cout << ans[i];
            }
            cout << endl;
        }
    }
    else
        cout << s << endl;

    return 0;
}