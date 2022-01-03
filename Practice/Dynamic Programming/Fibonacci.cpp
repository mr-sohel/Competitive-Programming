/**
 *	Author:  Sohel Rana
 *	Date:    2022-01-03 21:36:37
 *	Task:    Fibonacci 
**/
#include <bits/stdc++.h>


using namespace std;

long long memo[100] = {} ;

long long fibo(int n) {
    long long result;
    if (memo[n] != 0) {
        return memo[n];
    }
    if (n <= 1)
        result = n;
    else {
        result = fibo(n - 1) + fibo(n - 2);
        memo[n] = result;
    }
    return result;
}

int main() 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    int n;
    cin >> n;
    cout << fibo(n) << " ";
    return 0;
}