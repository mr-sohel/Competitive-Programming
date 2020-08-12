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

void solve() {
    int n;
    int a, b;
    cin >> n;
    vector<int> data(n);
    vector<int> p(n);
    vector<int> q(n);
    for (int i = 0; i < n; i++) cin>>p[i];
    for (int i = 0; i < n; i++) cin>>q[i];
    for (int i = 0; i < n; i++) data[i] = i + 1;
    int pos = 1;
    bool check = false;
    while(next_permutation(all(data))) {
        if(check == false) {
            for (int i = 0; i < n; i++) data[i] = i + 1; // print 0 if p and q is equal
            check = true;
        }
        if(n == 2) {
            if(p[0] == data[0] && p[1] == data[1])
                a = pos;
            if(q[0] == data[0] && q[1] == data[1])
                b = pos;
            pos++;
        }
        else if(n == 3) {
            if(p[0] == data[0] && p[1] == data[1] && p[2] == data[2]) {
                a = pos;
            }
            if(q[0] == data[0] && q[1] == data[1] && q[2] == data[2]) {
                b = pos;
            }
            pos++;
        }
        else if(n == 4) {
            if(p[0] == data[0] && p[1] == data[1] && p[2] == data[2] && p[3] == data[3]) {
                a = pos;
            }
            if(q[0] == data[0] && q[1] == data[1] && q[2] ==data[2] && q[3] == data[3]) {
                b = pos;
            }
            pos++;
        }
        else if(n == 5) {
            if(p[0] == data[0] && p[1] == data[1] && p[2] == data[2] && p[3] == data[3] && p[4] == data[4]) {
                a = pos;
            }
            if(q[0] == data[0] && q[1] == data[1] && q[2] ==data[2] && q[3] == data[3] && q[4] == data[4]) {
                b = pos;
            }
            pos++;
        }
        else if(n == 6) {
            if(p[0] == data[0] && p[1] == data[1] && p[2] == data[2] && p[3] == data[3] && p[4] == data[4] && p[5] == data[5]) {
                a = pos;
            }
            if(q[0] == data[0] && q[1] == data[1] && q[2] ==data[2] && q[3] == data[3] && q[4] == data[4] && q[5] == data[5]) {
                b = pos;
            }
            pos++;
        }
        else if(n == 7) {
            if(p[0] == data[0] && p[1] == data[1] && p[2] == data[2] && p[3] == data[3] && p[4] == data[4] && p[5] == data[5] && p[6] == data[6]) {
                a = pos;
            }
            if(q[0] == data[0] && q[1] == data[1] && q[2] ==data[2] && q[3] == data[3] && q[4] == data[4] && q[5] == data[5] && q[6] == data[6]) {
                b = pos;
            }
            pos++;
        }
        else if(n == 8) {
            if(p[0] == data[0] && p[1] == data[1] && p[2] == data[2] && p[3] == data[3] && p[4] == data[4] && p[5] == data[5] && p[6] == data[6] && p[7] == data[7]) {
                a = pos;
            }
            if(q[0] == data[0] && q[1] == data[1] && q[2] ==data[2] && q[3] == data[3] && q[4] == data[4] && q[5] == data[5] && q[6] == data[6] &&q[7] == data[7]) {
                b = pos;
            }
            pos++;
        }
    

    }
    cout << abs(a - b) << endl;
}

int main()
{
    //freopen("/home/taalpatar_shepai/Documents/my_codes/out.txt", "w", stdout);
    solve();

    return 0;
}