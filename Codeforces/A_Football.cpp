/**
 *	Author:  Sohel Rana
 *	Date:    2021-11-23 23:22:11
 *	Task:    A_Football 
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
typedef long double 	   	   ld;
typedef long long 		   ll;
typedef unsigned long long 	   ull;
const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const long long INF = 1e18;
const ld eps = 1.0E-14;

using namespace std;

bool count_z(string s) {
    int cnt = 0;
    for(int i = 0; i < s.length(); i++) {
       
        if(s[i] == '0') {
            cnt++;
            if(cnt >= 7)
                return true;
        } else 
            cnt = 0;
    }
    return false;
}
bool count_o(string s) {
   int cnt = 0;
    for(int i = 0; i < s.length(); i++) {
       
        if(s[i] == '1') {
            cnt++;
            if(cnt >= 7)
                return true;
        }
        else 
            cnt = 0;
    }
    return false;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    string s;
    cin>>s;
   
    if(count_z(s) or count_o(s)) {
        cout<<"YES"<<endl;
    } else 
        cout<<"NO"<<endl;
    return 0;
}
