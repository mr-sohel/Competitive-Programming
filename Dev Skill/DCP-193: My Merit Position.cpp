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
    int n, i;
    cin >> n;
    vector<pair<db, string>> v;
    vector<pair<db, string>>::iterator it;
    for (int i = 0; i < n; i++){
        string s;
        db d;
        cin >> s >> d;
        v.push_back(make_pair(d, s));
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if(v[i].first == v[j].first){
                if(v[i].second < v[j].second){
                    double a = v[i].first;
                    string b = v[i].second;
                    v[i].first = v[j].first;
                    v[i].second = v[j].second;
                    v[j].first = a;
                    v[j].second = b;
                }
            }
        }
    }

    for (it = v.end() - 1; it >= v.begin(); it--) {
        cout << it->first << " " << it->second << endl;
    }
    bool flag = true;
    for (int i = n - 1, t = 1; i >= 0; i--)
    {
        for (int j = i - 1; j >= 0; j--){
            if(v[i].first == v[j].first){
                v[i].first = t;
                v[j].first = t;
                flag = true;
            }
        }

        if(flag){
            v[i].first = t;
            t++;
            flag = false;
        }
    }
    cout << endl;
    for (int i = n - 1; i >= 0; i--)
    {
        cout << v[i].first << "." << v[i].second << endl;
    }
        return 0;
}
