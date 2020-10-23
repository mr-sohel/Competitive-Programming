/**
 *    Author:  Sohel Rana
 *    Date:    2020-10-23 17:27:59
 *	  Link:    link
**/
#include <bits/stdc++.h>
#define endl        '\n'
#define db          double
#define ld          long double
#define ll          long long
#define ull         unsigned long long
#define sqr(x)      (x) * (x)
#define gcd(a, b)   __gcd(a, b)
#define lcm(a, b)   ((a/gcd(a,b)) * b)
#define pf(x) 		push_front(x)
#define pb(x)       push_back(x)
#define eb(x)		emplace_back(x)
#define all(x)      (x).begin(), (x).end()
#define rall(x) 	(x).rbegin(), (x).rend()
#define sz(x) 		(int)x.size()
#define debug(x) 	cerr << #x << " = " << (x) << endl
#define debug2(x,y) cerr << #x << " = " << (x)<< "," << #y << " = " <<(y)<< endl
#define unsyncIO    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const ll INF = 1e18; 

using namespace std;

void insertion_sort(int arr[], int n) {
    int item, j;
    for (int i = 1; i < n; i++) {
        item = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > item) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = item;
    }
}

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    int arr[] = {44, 3, 38, 5, 47, 15, 36, 26, 27, 2};
    insertion_sort(arr, 10);
    for (int i = 0; i < 10; i++) {
        cout<<arr[i] << ' ';
    }
        return 0;
}
