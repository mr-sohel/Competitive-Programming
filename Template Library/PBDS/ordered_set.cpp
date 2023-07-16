#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

template <class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; // order_of_key, find_by_order
template <class T> using ordered_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
    ordered_multiset <int> a;
    a.insert(2);
    a.insert(5);
    a.insert(5);
    for (auto it : a) cout << it << " ";
    // cout << (a.find_by_order(x)) << endl; // value of index x , 0 based indexing, Takes O(log(n))
    // cout << (a.order_of_key(x)) << endl; //number of element strictly less than x Takes O(log(n))
}
