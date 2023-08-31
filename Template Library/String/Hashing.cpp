const ll P[] = {97, 1000003};

ll bigMod (ll a, ll e) {
	if (e == -1) e = MOD - 2;
	ll ret = 1;
	while (e) {
		if (e & 1) ret = ret * a % MOD;
		a = a * a % MOD, e >>= 1;
	}
	return ret;
}
int pwr[2][N], inv[2][N];

void initHash() {
	for (int it = 0; it < 2; ++it) {
		pwr[it][0] = inv[it][0] = 1;
		ll INV_P = bigMod(P[it], -1);
		for (int i = 1; i < N; ++i) {
			pwr[it][i] = (ll) pwr[it][i - 1] * P[it] % MOD;
			inv[it][i] = (ll) inv[it][i - 1] * INV_P % MOD;
		}
	}
}
struct RangeHash {
	vector <int> h[2], rev[2];

	RangeHash (const string S, bool revFlag = 0) {
		for (int it = 0; it < 2; ++it) {
			h[it].resize(S.size() + 1, 0);
			for (int i = 0; i < sz(S); ++i) {
				h[it][i + 1] = (h[it][i] + (ll) pwr[it][i + 1] * (S[i] - 'a' + 1)) % MOD;
			}
			if (revFlag) {
				rev[it].resize(sz(S) + 1, 0);
				for (int i = 0; i < sz(S); ++i) {
					rev[it][i + 1] = (rev[it][i] + (ll) inv[it][i + 1] * (S[i] - 'a' + 1)) % MOD;
				}
			}
		}
	}

	inline ll get (int l, int r) {
		if (l > r) return 0;
		ll one = (ll) (h[0][r + 1] - h[0][l]) * inv[0][l + 1] % MOD;
		ll two = (ll) (h[1][r + 1] - h[1][l]) * inv[1][l + 1] % MOD;
		if (one < 0) one += MOD;
		if (two < 0) two += MOD;
		return one << 31 | two;
	}

	inline ll getReverse (int l, int r) {
		if (l > r) return 0;
		ll one = (ll) (rev[0][r + 1] - rev[0][l]) * pwr[0][r + 1] % MOD;
		ll two = (ll) (rev[1][r + 1] - rev[1][l]) * pwr[1][r + 1] % MOD;
		if (one < 0) one += MOD;
		if (two < 0) two += MOD;
		return one << 31 | two;
	}
};

void solve() {
	initHash();
	string a, b; cin >> a >> b;
	RangeHash machine(a);
	multiset<ll>ms;
	int lenb = b.size() - 1;
	for (int i = 0; i + lenb < a.size(); i++) {
		ms.insert(machine.get(i, i + lenb));
	}
	RangeHash key(b);
	ll x = key.get(0, lenb);
	cout << ms.count(x) << endl;

}