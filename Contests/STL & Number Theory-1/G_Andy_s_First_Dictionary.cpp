/**
 *	Author:  Sohel Rana
 *	Date:    2020-10-30 23:26:43
 *	Task:    G_Andy_s_First_Dictionary 
**/
#include <bits/stdc++.h>
#define endl '\n'
#define db double
#define ld long double
#define ll long long
#define ull unsigned long long
#define sqr(x) (x) * (x)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a / gcd(a, b)) * b)
#define pf(x) push_front(x)
#define pb(x) push_back(x)
#define eb(x) emplace_back(x)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)x.size()
#define debug(x) cerr << #x << " = " << (x) << endl
#define debug2(x, y) cerr << #x << " = " << (x) << "," << #y << " = " << (y) << endl
#define unsyncIO                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)

const ld PI = acos((ld)-1);
const int MOD = 1e9 + 7;
const ll INF = 1e18;
const ld eps = 1.0E-14;

using namespace std;
//transform(data.begin(), data.end(), data.begin(), ::tolower)//
string modified(string temp) {
    transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
    if (sz(temp) == 1) {
        if (isalpha(temp[0]))
            return temp;
    }
    for (int i = 0; i < temp.length(); i++) {
        if (!isalpha(temp[i])) {
            temp.erase(i, 1);
            i--;
        }
    }
    return temp;
}

int main() {
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    unsyncIO;
    string santance, t;
    set<string> st;
    set<string>::iterator it;
    while (getline(cin, santance)) {
        string temp = "";
        for (int i = 0; i <= sz(santance); i++) {
            if (!isalpha(santance[i])) {
                t = modified(temp);
                if (!t.empty())
                    st.insert(t);
                //st.insert(modified(temp));
                temp = "";
            } else {
                temp += santance[i];
            }
        }
        //debug(temp);
    }
    for (it = st.begin(); it != st.end(); it++) {
        cout << *it << endl;
    }
    return 0;
}
/* s ?
sohel ?
soh23el ?
*/