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

//when you once use fast io in c++ . you can't use scanf and printf
using namespace std;

int main()
{
    //freopen("/home/taalpatar_shepai/Documents/my_codes/out.txt", "w", stdout);
    //unsyncIO;
    int k;
    cin >> k;
    vector<int> vc(26);
    string s, ans;
    
    cin >> s;
    for (int i = 0; i < s.length(); i++) {

        vc[s[i] - 'a']++;
    }
   
    bool check = false;
    for (int i = 0; i < vc.size(); i++) {
        if(vc[i] != 0) {
            if(vc[i] % k != 0) {
                check = true;
                break;
            }
        }
    }
    if(check == false) {
        for (int i = 0; i < k; i++)
        {
            for (int j = 0; j < 26; j++)
                for (int l = 0; l < vc[j] / k; l++)
                    printf("%c", j + 'a');
        }
    }
    else
        cout << "-1" << endl;
    return 0;
}
