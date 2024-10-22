int a[N];
ll tree[4 * N];

#define left   (node * 2)
#define right   (node * 2 + 1)
#define mid    ((lo + hi) / 2)


void build(int node, int lo, int hi) {
	if (lo == hi) {
		tree[node] = a[lo];
		return;
	}
	build(left, lo, mid);
	build(right, mid + 1, hi);
	tree[node] = (tree[left] + tree[right]);
}

ll query(int node, int lo, int hi, int L, int R) {
	if (L > hi or R < lo) return LONG_MAX;
	if (L <= lo and hi <= R) return tree[node];
	ll leftQuery = query(left, lo, mid, L, R);
	ll rightQuery = query(right, mid + 1, hi, L, R);

	return min(leftQuery, rightQuery);
}

void update(int node, int lo, int hi, int i, int val) {
	if (i > hi or i < lo) return;
	if (i <= lo and hi <= i) {
		tree[node] = val;
		return;
	}
	update(left, lo, mid, i, val);
	update(right, mid + 1, hi, i, val);
	tree[node] = (tree[left] + tree[right]);
}

void solve() {
	int n, q;   cin >> n >> q;
	for (int i = 1; i <= n; i++) cin >> a[i];
	build(1, 1, n);

	while (q--) {
		int tp;   cin >> tp;
		if (tp == 1) {
			int k, u;   cin >> k >> u;
			update(1, 1, n, k, u);
		}
		else {
			int a, b;   cin >> a >> b;
			cout << query(1, 1, n, a, b) << endl;
		}
	}
}