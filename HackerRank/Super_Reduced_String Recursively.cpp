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

void func(string s) {

    bool check = false;
    for (int i = 0; i < s.length(); i++) {
        if(s[i] == s[i+1]) {
            check = true;
            break;
        }
    }
    if(!check) {
        if(s.length() == 0) {
            cout << "Empty String" << endl;
        }
        else
            cout << s << endl;
        return ;
    }

    for (int i = 0; i < s.length(); i++) {
        
        if(s[i] == s[i+1]) {
            s.erase(i, 2);
        }
    }
    func(s);
    
}

int main()
{
    //freopen("/home/taalpatar_shepai/Documents/my_codes/out.txt", "w", stdout);
    string s;
    cin >> s;
    func(s);
   
    return 0;
}