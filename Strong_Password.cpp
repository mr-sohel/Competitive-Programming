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
    int n;
    int count = 0;
    cin >> n;
    string s, special_characters = "!@#$%^&*()-+";
    cin >> s;
    bool number = false, lower_case = false, upper_case = false, special_char = false;
    for (int i = 0; i < n; i++) {
        if(islower(s[i]))
            lower_case = true;
        else if(isupper(s[i]))
            upper_case = true;
        else if(isdigit(s[i]))
            number = true;
        else {
            for (int j = 0; j < special_characters.length(); j++){
                if(s[i] == special_characters[j]) {
                    special_char = true;
                    break;
                }
            }
            
        }
    }
    
    if(number == false)
        count++;
    if(lower_case == false)
        count++;
    if(upper_case == false)
        count++;
    if(special_char == false)
        count++;

    if (number && lower_case && upper_case && special_char) {
        if(n >= 6) {
            cout << 0 << endl;
        }
        else {
            cout << 6 - n << endl;
        }
    }
    else if(n >= 6) {
        cout << count << endl;
    }
    else {
        if(n+count >= 6)
            cout <<count<< endl;
        else
            cout << (6 - (n + count)) + count << endl;
    }
    return 0;
}
