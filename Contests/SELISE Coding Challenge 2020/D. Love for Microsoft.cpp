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
#define unsyncIO    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const ll INF = 1e18; 

using namespace std;

int main()
{
    //freopen("/home/taalpatar_shepai/Documents/my_codes/out.txt", "w", stdout);
    unsyncIO;
    string s;
    cin >> s;
    int a[8] = {0};
    a[0] = count(all(s), 'm');
    a[1] = count(all(s), 'i');
    a[2] = count(all(s), 'c');
    a[3] = count(all(s), 'r');
    a[4] = count(all(s), 'o');
    a[5] = count(all(s), 's');
    a[6] = count(all(s), 'f');
    a[7] = count(all(s), 't');
    bool check = false;
    for (int i = 0; i < 8; i++) {
        if(a[i] == 0) {
            check = true;
            break;
        }
    }
    if (!check)
            cout << "We both love Microsoft!" << endl;
    else
        cout << "Only I love Microsoft!" << endl;
    return 0;
}
