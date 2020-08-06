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
#define unsyncIO    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)


using namespace std;


int main()
{
    //freopen("/home/sohel/Documents/my_codes/out.txt", "wt", stdout);
    int t;
    string s;
    cin >> t;
    for (int k = 1; k <= t; k++) {
        vector<char> x; // for unique chars.
        vector<int> v(200);
        cin >> s;
        bool check = false;
        for (int i = 0; i < s.length(); i++) {
            v[s[i]]++; //counting occurrences
        }
        for (int i = 0; i < s.length(); i++) {
            if (!check) {
                x.pb(s[i]);
                check = true;
            }
            if (count(x.begin(), x.end(), s[i]))
                continue;
            else
                x.pb(s[i]);
        }
        cout << "Case #" << k << ":" << endl;
        for (int i = 0; i < x.size(); i++) {

            cout << x[i] << " " << v[x[i]] << endl;
        }
    }

    return 0;
}