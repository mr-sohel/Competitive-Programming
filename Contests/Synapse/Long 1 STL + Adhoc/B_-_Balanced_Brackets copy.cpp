/**
 *	Author:  Sohel Rana
 *	Date:    2022-05-24 15:38:20
 *	Task:    B_-_Balanced_Brackets 
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
#define sz(x)		(long long)x.size()
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

bool isBalanced(string s) {
    stack<char>st;
    bool flag = true;
    for (int i = 0;i < s.length();i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            st.push(s[i]);
        else if (s[i] == '}') {
            if (st.empty() or (st.top() != '{')) {
                return false;
            }
            st.pop();
        } else if (s[i] == ']') {
            if (st.empty() or (st.top() != '[')) {
                return false;
            }
            st.pop();
        } else if (s[i] == ')') {
            if (st.empty() or (st.top() != '(')) {
                return false;
            }
            st.pop();
        }
    }
    if (st.empty())
        return true;
    else
        return false;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    string s;
    int t;
    cin >> t;
    while (t--) {

        cin >> s;
        if (isBalanced(s))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
