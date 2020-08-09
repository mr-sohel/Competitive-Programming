#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long n, k;
    cin >> n >> k;
    while (k--)
    {
        if (n % 10 == 0)
        {
            n /= 10;
        }
        else
            n--;
    }
    cout << n << endl;
    return 0;
}