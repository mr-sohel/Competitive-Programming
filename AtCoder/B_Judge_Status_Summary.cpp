#include <bits/stdc++.h>
#define endl "\n"
#define pi acos(-1)
#define faster_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main()
{
    //freopen("/home/sohel/Documents/my_codes/out.txt", "wt", stdout);
    int t, ac = 0, wa = 0, tle = 0, re = 0;
    cin >> t;
    string temp;
    vector<string> vs;
    for (int i = 0; i < t; i++) {
        cin >> temp;
        vs.push_back(temp);
    }
    ac = count(vs.begin(), vs.end(), "AC");
    wa = count(vs.begin(), vs.end(), "WA");
    tle = count(vs.begin(), vs.end(), "TLE");
    re = count(vs.begin(), vs.end(), "RE");
    cout << "AC x " << ac << endl;
    cout << "WA x " << wa << endl;
    cout << "TLE x " << tle << endl;
    cout << "RE x " << re << endl;
    return 0;
}