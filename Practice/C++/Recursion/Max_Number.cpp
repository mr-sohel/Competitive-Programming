/**
 *	Author:  Sohel Rana
 *	Date:    2021-12-28 20:29:24
 *	Task:    K_Max_Number 
**/
#include <bits/stdc++.h>

using namespace std;

int mx = INT_MIN;

void findmx(int i,int n, int* a) {
    if (i >= n)
        return;
    findmx(i + 1, n, a);
    if (a[i] > mx)
        mx = a[i];
}

int main() 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    int n;
    cin >> n;
    int a[n];
    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }
    findmx(0, n, a);
    cout << mx << endl;
    return 0;
}