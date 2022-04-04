#include <bits/stdc++.h>
#define endl		'\n'
#define sqr(x)		(x) * (x)
#define gcd(x,y)	__gcd(x, y)
#define lcm(x,y)	((x/gcd(x,y)) * y)
#define pf(x)		push_front(x)
#define pb(x)		push_back(x)
#define eb(x)		emplace_back(x)
#define all(x)		(x).begin(), (x).end()
#define rall(x)		(x).rbegin(), (x).rend()
#define sz(x)		(int)x.size()
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
const int mx = 1e5;

using namespace std;

#define pii pair<int, int>

#define MAX 46656
#define LMT 216
#define LEN 4830
#define RNG 100032

unsigned base[MAX / 64], segment[RNG / 64], primes[LEN];

#define sq(x) ((x)*(x))
#define mset(x,v) memset(x,v,sizeof(x))
#define chkC(x,n) (x[n>>6]&(1<<((n>>1)&31)))
#define setC(x,n) (x[n>>6]|=(1<<((n>>1)&31)))

void sieve()
{
    unsigned i, j, k;
    for (i = 3; i<LMT; i += 2)
        if (!chkC(base, i))
            for (j = i*i, k = i << 1; j<MAX; j += k)
                setC(base, j);
    primes[0] = 2;
    for (i = 3, j = 1; i<MAX; i += 2)
        if (!chkC(base, i))
            primes[j++] = i;
}


vector <pii> factors;
void primeFactors(int num)
{
    int expo = 0;   
    for (int i = 0; primes[i] <= sqrt(num); i++)
    {
        expo = 0;
        int prime = primes[i];
        while (num % prime == 0){
            expo++;
            num = num / prime;
        }
        if (expo>0)
            factors.push_back(make_pair(prime, expo));
    }

    if ( num >= 2)
        factors.push_back(make_pair(num, 1));

}

vector <int> divisors;
void setDivisors(int n, int i) {
    int j, x, k;
    for (j = i; j<sz(factors); j++) {
        x = factors[j].first * n;
        for (k = 0; k<factors[j].second; k++) {
            divisors.push_back(x);
            setDivisors(x, j + 1);
            x *= factors[j].first;
        }
    }
}
vector<int> cnt(mx);
int main() {
    sieve();
    int x; 
    cin >> x;
    primeFactors(x);
    setDivisors(1, 0);
    divisors.push_back(1);
    sort(divisors.begin(), divisors.end());
    
    for (int j = 0; j < sz(divisors); j++) {
        int temp = __builtin_popcount(divisors[j]);
        cnt[temp]++;
    }
    cout<<*max_element(all(cnt))<<endl;
}
