/**
 *    Author:  Sohel Rana
 *    Date:    2020-10-17 21:06:20
 *	  Link:    link
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

int main()
{
    //freopen("/home/taalpatar_shepai/Documents/my_codes/out.txt", "w", stdout);
    unsyncIO;
    int n;
    vector<int> count_space;
    while (cin >> n) {
        if (n == 0)
            break;
        string vs[n];
        cin.ignore();  // to ignore enter key char
        for (int i = 0; i < n; i++) getline(cin, vs[i]);
        int ans = 0, temp = 0, min = 0;

        for (int i = 0; i < n; i++) {
            temp = count(all(vs[i]), ' ');  // replace 'B' to ' ' before submiting
            //cout << vs[i] << endl;
            //debug(temp);
            count_space.pb(temp);
        }
        min = *min_element(all(count_space));
        for (int i = 0; i < n; i++) {
            ans += count_space[i] - min;
        }
        //debug(min);
        cout << ans << endl;
        count_space.clear();
    }
    return 0;
}
/*
the idea is at first count all the space between every string and store in a array.
then find which string has the minimum space.
then iterate all the element of array and do this operation ans += arr[i] - min; this will count total void exists after left surface connect to the right surface 

for better understand see below. 

XXXXBBBBBBBBBBBBBBBBXXXXX / total space = 16; ans += 16 - min(15) = 1 XXXBBBBBBBBBBBBBBBXXXXXXX  / total space = 15; ans += 15 - min(15) = 0;
XXXXXBBBBBBBBBBBBBBBBXXXX total space = 16; ans += 16 - min(15) = 1;
XBBBBBBBBBBBBBBBBBXXXXXX total space = 17; ans += 17 - min(15) = 2
ans will be 4 .
*/