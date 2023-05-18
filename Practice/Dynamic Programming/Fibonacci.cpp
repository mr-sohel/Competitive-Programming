#include <bits/stdc++.h>

using namespace std;

long long memo[10005];

long long fibo(long long n) {
    if (n == 0 or n == 1) return 1;
    if (memo[n] != -1) return memo[n];
    return memo[n] = fibo(n - 1) + fibo(n - 2);
}

int main() {
    memset(memo, -1, sizeof(memo));
    int n;
    cin >> n;
    cout << fibo(n) << " ";
    return 0;
}