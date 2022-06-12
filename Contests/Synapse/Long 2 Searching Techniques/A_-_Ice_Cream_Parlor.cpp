/**
 *	Author:  Sohel Rana
 *	Date:    2022-06-12 11:50:13
 *	Task:    A_-_Ice_Cream_Parlor 
**/
#include <bits/stdc++.h>
#define endl		'\n'
#define sqr(x)		(x) * (x)
#define gcd(x,y)	__gcd(x, y)
#define lcm(x,y)	((x/gcd(x,y)) * y)
#define pf          push_front
#define pb          push_back
#define fi          first
#define se          second
#define mp          make_pair
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
const int mx = 1e4+5;

using namespace std;

vector<int> TwoPointer(vector<pair<int,int> >& vp, int target, int n) {
int left = 0, right = n-1;
        while(left < right) {
            ll sum = vp[left].fi + vp[right].fi;
            if(sum ==  target) {
                return {vp[left].se, vp[right].se};
            }
            else if(sum < target)
                left++;
            else
                right--;
        }
    return {};
}

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    unsyncIO;
    int t;
    cin>>t;
    while(t--) {
        int target, n;
        cin>>target>>n;
        vector<pair<int,int> > vp;
        for(int i = 1; i <= n; i++){
            int x; cin>>x;
            vp.pb({x,i});
        }
        sort(all(vp));
        vector<int> ans;
        ans = TwoPointer(vp, target, n);
        sort(all(ans));

        cout<<ans[0] <<" "<<ans[1]<<endl;
    }
    return 0;
}