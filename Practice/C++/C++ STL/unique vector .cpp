#include <bits/stdc++.h>
#define endl        '\n'
#define pi          2*acos(0.0)
#define pb(a)       push_back(a)
#define db          double
#define ld          long double
#define ll          long long
#define ull         unsigned long long
#define mod         1000000007
#define inf         1000000000000000001
#define sqr(x)      (x) * (x)
#define gcd(a, b)   __gcd(a, b)
#define lcm(a, b)   ((a/gcd(a,b)) * b)
#define debug(x) 	cerr << #x << " = " << (x) <<endl
#define all(x)      (x).begin(), (x).end()
#define unsyncIO    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)


using namespace std;

int main()
{
     //freopen("/home/sohel/Documents/my_codes/out.txt", "wt", stdout);
     vector<int> vec;
     vec = {1, 1, 2, 2, 3, 2, 1};
     vec.erase(unique(all(vec)), vec.end());
     //vch.resize(unique(all(vch)) - vch.begin()); deletes consicutive duplicates.
     for (int i = 0; i < vec.size(); i++) {
         cout << vec[i] << " ";
     }
}
