#include <bits/stdc++.h>
#define endl '\n'
#define pb push_back
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const int MOD = 1e9+7; // 998244353;
const int MX = 2e5+5; 
const ll INF = 1e18;
const ld PI = acos((ld)-1);
#define unsyncIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main()
{
    //freopen("/home/sohel/Documents/my_codes/out.txt", "wt", stdout);

    unsyncIO;
    vector<int> v;
    int a, b, c;
    while (cin >> a>>b>>c)
    {
        v.pb(a);
        v.pb(b);
        v.pb(c);
        sort(v.begin(), v.end());
        if (a == 0 && b == 0 && c == 0)
            break;
        if(((a*a)+(b*b)) == (c*c))
            cout << "right" << endl;
        else
            cout<<"wrong"<<endl;
           
    }

    return 0;
}
