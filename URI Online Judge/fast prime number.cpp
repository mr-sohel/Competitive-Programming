#include <bits/stdc++.h>
using namespace std;

void isprime(unsigned long long num)
{
    int ck;
    if (num == 2)
        cout << "Prime" << endl;
    else if (num < 2)
        cout << "Not Prime" << endl;
    else if (num % 2 == 0)
        cout << "Not Prime" << endl;
    else
    {
        ck = 0;
        for (int i = 3; i < sqrt(num); i += 2)
        {
            if (num % i == 0)
            {
                ck = 1;
                break;
            }
        }
        if (ck == 0)
            cout << "Prime" << endl;
        else
            cout << "Not Prime" << endl;
    }
}

int main()
{
    unsigned long long t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        isprime(n);
    }
}
