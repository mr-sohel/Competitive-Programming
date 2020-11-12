/**
 *	Author:  Sohel Rana
 *	Date:    2020-11-12 19:54:49
 *	Task:    Is_it_divisible_by_3_6_and_9_ 
**/
#include <bits/stdc++.h>
#define endl        '\n'
#define sqr(x)      (x) * (x)
#define gcd(a, b)   __gcd(a, b)
#define lcm(a, b)   ((a/gcd(a,b)) * b)
#define pf(x) 		push_front(x)
#define pb(x)       push_back(x)
#define eb(x)		emplace_back(x)
#define all(x)      (x).begin(), (x).end()
#define rall(x) 	(x).rbegin(), (x).rend()
#define sz(x) 		(int)x.size()
#define debug(x) 	cerr << #x << " = " << (x) << endl
#define debug2(x,y) cerr << #x << " = " << (x)<< "," << #y << " = " <<(y)<< endl
#define unsyncIO    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

typedef double 			   db;
typedef long double 	   ld;
typedef long long 		   ll;
typedef unsigned long long ull;
const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const long long INF = 1e18;
const ld eps = 1.0E-14;

using namespace std;

ll sol(string s) {
    ll sum = 0;
    for(int i = 0;i < sz(s); i++)
        sum += s[i]-'0';
    return sum;
}
void div3(ll sum ) {
    if(sum % 3 == 0)
        cout << "Yes" << endl;
    else 
        cout << "No" << endl;
}
void div9(ll sum ) {
    if(sum % 9 == 0)
        cout << "Yes" << endl;
    else 
        cout << "No" << endl;
}
void div6(string s, ll sum) {
    if((s[sz(s)-1]-'0') % 2 == 0 and sum % 3 == 0)
        cout << "Yes" << endl;
    else 
        cout << "No" << endl;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    string s;
    cin>>s;
    ll sum = sol(s);
    div3(sum);
    div6(s, sum);
    div9(sum);
    return 0;
}
