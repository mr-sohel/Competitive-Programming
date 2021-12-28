/**
 *	Author:  Sohel Rana
 *	Date:    2021-12-28 18:57:47
 *	Task:    F_Print_Even_Indices 
**/
#include <bits/stdc++.h>

using namespace std;

void print(int i, int t, int* a) {
    if (i >= t)
        return;
    print(i + 1, t, a);
    if (i % 2 == 0)
        cout << a[i] << " ";
    //cout << i << " ";
}

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    int t;
    cin >> t;
    int a[t];
    for (int i = 0; i < t; i++) {
        cin >> a[i];
    }
    print(0, t, a);
    cout << endl;
    return 0;
}