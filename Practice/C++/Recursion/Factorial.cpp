/**
 *	Author:  Sohel Rana
 *	Date:    2021-12-28 20:42:15
 *	Task:    J_Factorial 
**/
#include <bits/stdc++.h>


using namespace std;

long long fact(int n) {
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}

int main() 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    int n;
    cin >> n;
    cout << fact(n) << endl;
    return 0;
}