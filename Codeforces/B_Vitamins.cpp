/**
 *	Author:  Sohel Rana
 *	Date:    2022-02-27 16:09:08
 *	Task:    B_Vitamin
**/
#include <bits/stdc++.h>
#define endl		'\n'
#define sqr(x)		(x) * (x)
#define gcd(x,y)	__gcd(x, y)
#define lcm(x,y)	((x/gcd(x,y)) * y)
#define pf(x)		push_front(x)
#define pb(x)		push_back(x)
#define eb(x)		emplace_back(x)
#define all(x)		(x).begin(), (x).end()
#define rall(x)		(x).rbegin(), (x).rend()
#define sz(x)		(int)x.size()
#define prec(x) 	fixed<<setprecision(x)
#define debug(x)	cerr<<#x<<" = "<<(x)<< endl
#define debug2(x,y)	cerr<<#x<<" = "<<(x)<<","<<#y<<" = "<<(y)<< endl
#define unsyncIO	ios_base::sync_with_stdio(false); cin.tie(nullptr)

using ll = long long;
using db = double;
using ld = long double;
using ull = unsigned long long;

const ld pi = acos((ld)-1);
const int mod = 1e9+7;
const ld eps = 1e-9;
const int inf = INT_MAX;

using namespace std;

bool cka, ckb, ckc;

int main() 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    unsyncIO;
    int n;
    ll a = inf, b = inf, c = inf, ab = inf, ac = inf, bc = inf, abc = inf;
    cin >> n;
    while(n--) {
        ll temp;
        string s;
        cin >> temp >> s;
        sort(all(s));
        for (int i = 0; i < (int)s.size(); i++) {
            if (s[i] == 'A')
                cka = true;
            if (s[i] == 'B')
                ckb = true;
            if (s[i] == 'C')
                ckc = true;
        }
        if (s == "A")
            a = min(a, temp);
        if (s == "B")
            b = min(b, temp);
        if (s == "C")
            c = min(c, temp);
        if (s == "AB")
            ab = min(ab, temp);
        if (s == "AC")
            ac = min(ac, temp);
        if (s == "BC")
            bc = min(bc, temp);
        if (s == "ABC")
            abc = min(abc, temp);        
    }
    if (!cka or !ckb or !ckc) {
        cout << "-1" << endl;
    } else {
        ll tmp = (a+b+c);
        ll tmp1 = min(ab+c, min(ab+ac, ab+bc));
        ll tmp2 = min(bc+a, min(ab+bc, ac+bc));
        ll tmp3 = min(ac+b, min(ac+bc, ac+ab));
        cout << min(tmp,min(tmp1,min(tmp2,min(tmp3,abc)))) << endl;     
    }
    
    return 0;
}