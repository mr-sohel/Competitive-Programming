/**
 *	Author:  Sohel Rana
 *	Date:    2022-04-04 22:09:07
 *	Task:    Find an Apartment 
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
const ll inf = 1e18;
const ld eps = 1e-9;
const int mx = 1e5;

using namespace std;
vector<string> vec, vec2;

bool checkroom(string s) {
    int cnt = 0;
    string bed = "bedrooms";
    string bath = "bathrooms";
    if (sz(bed) == sz(s)) {
        for (int i = 0; i < sz(s); i++) {
            if (s[i] != bed[i]) 
                cnt++;
        }
        if (cnt <= 1) 
            return true;
    } else if (sz(bath) == sz(s)) {
        for (int i = 0; i < sz(s); i++) {
            if (s[i] != bath[i]) 
                cnt++;
        }
        if (cnt <= 1) 
            return true;
    }
    return false;
}

void split(string str) {
    stringstream ss(str);
    while (ss >> str) 
        vec.pb(str);
}

bool istwo(string s) {
    int cnt = 0;
    string x = "two";
    for (int i = 0;i < sz(x); i++) {
        if (s[i] != x[i])
            cnt++;
    }
    if (cnt <= 1)
        return true;
    else
        return false;
}

int main() 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    int n, res = 0;
    cin >> n;
    cin.ignore();
    for (int i = 0;i < n; i++){
        string s;
        getline(cin, s);
        split(s);
        for (int j = 0; j < sz(vec); ) {
            if (sz(vec[j]) == 3 and istwo(vec[j])) {
                j++;
                vec2.pb(vec[j]);
            } else
                j++;
        }
        if (sz(vec2)==2 and checkroom(vec2[0]) and checkroom(vec2[1]))
            res++;
        vec.clear();
        vec2.clear();

    }
    cout << res << endl;

    return 0;
}