#include <iostream>
#include <math.h>
#define endl '\n'
using namespace std;

int is_prime(unsigned long long n)
{
    
    unsigned long long i, sq = sqrt(n) + 1;

    if (n == 2)
        return 1;

    if (n % 2 == 0)
        return 0;

    for (i = 3; i <= sq; i += 2)
        if (n % i == 0)
            return 0;
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, c = 1, prime;
    unsigned long long n, m, k,i;
    cin >>t;

    while (t--)
    {
        cin >> n;

        if(n % 2 != 0){
            for (i = n; i > 0; i = i - 2)
            {
                if (is_prime(i))
                {
                    m = i;
                    while (m != 0)
                    {
                        k = m % 10;

                        if (k == 2 || k == 3 || k == 5 || k == 7)
                            prime = 0;

                        if (!(k == 2 || k == 3 || k == 5 || k == 7))
                        {
                            prime = 1;
                            break;
                        }
                        m = m / 10;
                    }
                    if (prime != 1)
                    {
                        cout << "Case " << c << ": " << i << endl;
                        break;
                    }
                }
            }
        }

        else{
            for (i = n; i > 0; i = i - 3)
            {
                if (is_prime(i))
                {
                    m = i;
                    while (m != 0)
                    {
                        k = m % 10;

                        if (k == 2 || k == 3 || k == 5 || k == 7)
                            prime = 0;

                        if (!(k == 2 || k == 3 || k == 5 || k == 7))
                        {
                            prime = 1;
                            break;
                        }
                        m = m / 10;
                    }
                    if (prime != 1)
                    {
                        cout << "Case " << c << ": " << i << endl;
                        break;
                    }
                }
            }
        }    
         c++;
    }
    return 0;
}
