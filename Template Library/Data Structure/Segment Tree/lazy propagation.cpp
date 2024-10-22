#define left   (2 * node)
#define right  (left + 1)
#define mid    ((lo + hi) >> 1)

int arr[N];
ll tree[4 * N], lazy[4 * N];

void build(int node, int lo, int hi) {
   if (lo == hi) {
      tree[node] = arr[lo];
      return;
   }
   build(left, lo, mid);
   build(right, mid + 1, hi);
   tree[node] = (tree[left] + tree[right]);
}
void propagate(int node, int lo, int hi) {
   if (lazy[node] != 0) {
      tree[node] += lazy[node] * (hi - lo + 1);

      if (lo != hi) {
         lazy[left] += lazy[node];
         lazy[right] += lazy[node];
      }
      lazy[node] = 0;
   }
}
void update(int node, int lo, int hi, int L, int R, int u) {
   propagate(node, lo, hi);
   if (R < lo or L > hi) {
      return;
   }
   if (lo >= L && hi <= R) {
      tree[node] += u * (hi - lo + 1);
      if (lo != hi) {
         lazy[left] += u;
         lazy[right] += u;
      }
      return;
   }
   update(left, lo, mid, L, R, u);
   update(right, mid + 1, hi, L, R, u);
   tree[node] = tree[left] + tree[right];
}

ll query(int node, int lo, int hi, int L, int R) {
   propagate(node, lo, hi);

   if (R < lo or L > hi) {
      return 0;
   }

   if (lo >= L && hi <= R) {
      return tree[node];
   }

   ll leftQuery = query(left, lo, mid, L, R);
   ll rightQuery = query(right, mid + 1, hi, L, R);

   return leftQuery + rightQuery;
}