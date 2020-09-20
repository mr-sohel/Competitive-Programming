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
    int q, type, marks;
    string name;
  
    map<string, int> m;
    map<string, int>::iterator it;
   
    cin >> q;
    while(q--) {
        cin >> type;
        if (type == 1)
        {
            cin >> name;
            cin >> marks;
            int temp;
            it = m.find(name);
            if (it == m.end())
                m.insert(make_pair(name, marks));
            else {
                // temp = m[name];
                // marks += temp;
                m[name] += marks;
            }
        }
        else if(type == 2) {
            cin >> name;
            m.erase(name);
        }
        else if(type == 3) {
            cin >> name;
            it = m.find(name);
            if(it == m.end())
                cout << 0 << endl;
            else
                cout << m[name] << endl;
        }
    }
    return 0;
}
