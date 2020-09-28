/**
 *    Author:  Sohel Rana  
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
#define debug(x) 	cerr << #x << " = " << (x) <<endl
#define unsyncIO    ios_base::sync_with_stdio(0); cin.tie(0)

const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const ll INF = 1e18; 

using namespace std;

int func(string s) {
    int cnt = 0;
    for (int i = 0; i < s.length(); ) {
        if(s[i] == 'S' && s[i+1] == 'O' && s[i+2] == 'S') {
            i += 3;
        }
        else{
            if(s[i] != 'S')
                cnt++;
            if(s[i+1] != 'O')
                cnt++;
            if(s[i+2] != 'S')
                cnt++;
            i += 3;
        }
    }
    return cnt;
}

int main()
{
    //freopen("/home/taalpatar_shepai/Documents/my_codes/out.txt", "w", stdout);
    unsyncIO;
    string s;
    cin >> s;
    // int temp;
    // temp = s.length() / 3;
    cout << func(s) << endl;

    return 0;
}