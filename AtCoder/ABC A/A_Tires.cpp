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
#define unsyncIO    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)


using namespace std;

int main()
{
    //freopen("/home/sohel/Documents/my_codes/out.txt", "wt", stdout);
    string s;
    cin >> s;
    int len = s.length();
    if(s[len-1] == 'r') {
        if(s[len-2] == 'e')
            cout << "er\n";
    } else if(s[len-1] == 't') {
        if(s[len-2] == 's') {
            if(s[len-3] == 'i')
                cout << "ist\n";
        }
    }
    return 0;
}
