/**
 *	Author:  Sohel Rana
 *	Date:    2021-12-28 20:48:58
 *	Task:    L_Summation 
**/
#include <bits/stdc++.h>

using namespace std;

long long s;

void sum(int n, int i, int* a) {
    if (i >= n)
        return;
    s += a[i];
    sum(n, i + 1, a);
}

int main() 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    int n; cin >> n;
    int a[n];
    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }
    sum(n, 0, a);
    cout << s << endl;

    return 0;
}