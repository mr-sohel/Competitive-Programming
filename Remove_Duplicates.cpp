#include <bits/stdc++.h>
#define endl '\n'
#define pi 2 * acos(0.0)
#define pb(a) push_back(a)
#define db double
#define ld long double
#define ll long long
#define ull unsigned long long
#define mod 1000000007
#define inf 1000000000000000001
#define sqr(x) (x) * (x)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a / gcd(a, b)) * b)
#define debug(x) cerr << #x << " = " << (x) << endl
#define unsyncIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

//getting WA :(

int main()
{
    //freopen("/home/sohel/Documents/my_codes/out.txt", "wt", stdout);
    unsyncIO;
    int t;
    string s;
    vector<char> x; // for unique chars.
    cin >> t;
    for (int k = 1; k <= t; k++)
    {
        cin >> s;
        bool check = false;
        for (int i = 0; i < s.length(); i++)
        {
            if(!check) {
                x.pb(s[i]);
                check = true;
            }

            if(count(x.begin(), x.end(), s[i]))
                continue;
            else
                x.pb(s[i]);
        }
        int arr[52] = {0};
        for (int i = 0; i < x.size(); i++)
        {
            if(islower(x[i])) {
                int temp; //can be more efficient
                temp = x[i] - 'a';
                arr[temp] = count(s.begin(), s.end(), x[i]); // counting occurance 
            }
            else {
                int temp; //can be more efficient
                temp = x[i] - 'A';
                temp += 26;
                arr[temp] = count(s.begin(), s.end(), x[i]);
            }
        }
        cout << "Case #" << k << ":" << endl;
        for (int j = 0; j < x.size(); )
        {
            if(islower(x[j])) {
                int temp;
                temp = x[j] - 'a';
                cout << x[j] << " " << arr[temp] << endl;
                j++;
            }
            else {
                int temp;
                temp = x[j] - 'A';
                temp += 26;
                cout << x[j] << " " << arr[temp] << endl;
                j++;
            }
        }
        x.clear();
    }
    return 0;
}
