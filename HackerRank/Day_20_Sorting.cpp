/**
 *    Author:  Sohel Rana 
 *    Date:    28-09-2020
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
#define debug(x) 	cerr << #x << " = " << (x) <<endl
#define unsyncIO    ios_base::sync_with_stdio(0); cin.tie(0)

const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const ll INF = 1e18; 

using namespace std;

void bubble_sort(int arr[], int n) {
    int swaps = 0;
    for (int i = 0; i < n; i++ ) {
        for (int j = 0; j < n - 1 - i; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j + 1]);
                swaps++;
            }
        }
    }
    // for (int i = 0; i < n; i++) {
    //     cout << arr[i] << ' ';
    // }
    // cout << endl;
    cout << "Array is sorted in " << swaps << " swaps." << endl;
    cout << "First Element: " << arr[0] << endl;
    cout << "Last Element: " << arr[n - 1] << endl;
}

int main()
{
    //freopen("/home/taalpatar_shepai/Documents/my_codes/out.txt", "w", stdout);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bubble_sort(arr, n);

    return 0;
}
