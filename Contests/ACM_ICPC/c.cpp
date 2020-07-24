#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
    return b ? gcd(b, a % b) : a;
}
unsigned long long test, a, b;
int main()
{
    //  int t,a,b,i;

    cin >> test;

    for (int index = 1; index <= test; index++)
    {

        cin >> a >> b;
        unsigned long long j;
        unsigned long long c = 0;
        for (j = a; j <= b; j++)
        {
            unsigned long long e = 0;
            unsigned long long k;

            if (j % 2 != 0)
                e++;
            for (k = 1; k <= j / 2; k += 2)
            {
                if (j % k == 0)
                {
                    e++;
                }
            }
            if (e % 2 != 0)
                c++;
        }
        cout << "Case " << index << ": " << c << endl;
    }
    return 0;
}