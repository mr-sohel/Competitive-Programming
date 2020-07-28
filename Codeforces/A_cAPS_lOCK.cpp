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
#define error(x) 	cerr << #x << " = " << (x) <<endl
#define unsyncIO    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)


using namespace std;

int main()
{
    //freopen("/home/sohel/Documents/my_codes/out.txt", "wt", stdout);
    string s;
    cin >> s;
    bool ok = false;
    if(isupper(s[0])) { // sob gula upper thakle
        ok = false;
        for (int i = 1; i < s.length(); i++){
            if(islower(s[i])) {
                ok = true;
                break;
            }
        }
        if(ok == false) {
            printf("%c", tolower(s[0]));
            for (int i = 1; i < s.length(); i++)
                printf("%c",tolower(s[i]));
        }
        else
            cout << s;
    }

    else if (islower(s[0])) {
        ok = false;
        for (int i = 1; i < s.length(); i++) {
            if(islower(s[i])) {
                ok = true;
                break;
            }
        }
        if(ok == false) {
            printf("%c", toupper(s[0]));
            for (int i = 1; i < s.length(); i++)
                printf("%c",tolower(s[i]));
        }
        else {
            cout << s;
        }
    }
    return 0;
}