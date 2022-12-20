This is a repository for uploading source codes of my solved or unsolved problems.
```
template<typename T>inline T POW(T B,T P){ if(P==0) return 1; if(P&1) return B*POW(B,P-1);  else return sqr(POW(B,P/2));}

`ll BigMod(ll a, ll b, ll m) { a %= m; ll res = 1;while (b > 0) {if (b & 1)res = res * a % m;a = a * a % m;b >>= 1;}return res;}`

ll ModInverse(ll number, ll mod){return BigMod(number, mod-2, mod);}

bool isPrime(ll n){if (n < 2) return false;else if (n == 2) return true; else if (n % 2 == 0) return false;for (ll i = 3; i*i <= n; i += 2){if (n % i == 0)return false;}return true;}


ll Mulmod(ll base, ll power, ll mod){if(power==0) return 0; if(power==1) return base%mod; ll x = Mulmod(base,power/2,mod); x = (x+x)%mod; if(power%2){x = (x+(base%mod))%mod;}return x;}

ll BigMulmod(ll base, ll power, ll mod){if(power==0) return 1%mod; if(power==1) return base%mod; ll x = BigMulmod(base,power/2,mod); x = Mulmod(x,x,mod); if(power%2){x = Mulmod(x,(base%mod),mod);}return x;}

bool isVowel(char ch){ ch=toupper(ch); if(ch=='A'||ch=='U'||ch=='I'||ch=='O'||ch=='E') return true; return false;}

bool isConso(char ch){if (isalpha(ch) && !isVowel(ch)) return true; return false;}

int toInt(string s)  { int sm; stringstream ss(s); ss>>sm; return sm; }

template<class T> string convert(T _input) { stringstream blah; blah << _input; return blah.str(); }

int distchar(char a, char b){int x = ((a - b)+26)%26;int y = ((b-a)+26)%26;return min(x,y);}

vec.resize(unique(all(vec)) - vec.begin());
vec.erase(unique(all(vec)), vec.end());

// double compare
bool equal(double a, double b) {
	if (fabs(a - b) <= EPS ) return true; else return false;
}
bool notEqual(double a, double b) {
	if (fabs(a - b) > EPS) return true; else return false;
}
bool lessThan(double a, double b) {
	if (a + EPS < b) return true; else return false;
}
bool greaterThan (double a, double b) {
	if (a > b + EPS) return true; else return false;
}
bool lessThanOrEqual (double a, double b) {
	if (equal(a, b) or (lessThan(a, b))) return true; else return false;
}
bool greaterThanOrEqual(double a, double b) {
	if (equal(a, b) or greaterThan(a, b)) return true; else return false;
}
```
