#include <bits/stdc++.h>
#define endl '\n'
#define pi acos(-1)
#define faster_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef unsigned long long ull;

using namespace std;

// i can't solve it. i read the editorial to understand how to solve it. sieve was so hard for me to use in this problem.

#define MAX 1000001

bitset<MAX> marked; //for memory efficient ,

bool isPrime(ll n)
{
    if (n < 2)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    return marked[n] == false;
}
void sieve()
{
    for (int i = 3; i * i <= MAX; i += 2)
    {
        if (marked[i] == false) { // i is a prime
            for (int j = i * i; j <= MAX; j += i + i) {
                marked[j] = true;
            }
        }
    }
}

int main()
{
    //freopen("/home/sohel/Documents/my_codes/out.txt", "wt", stdout);
    faster_io;
    sieve();
    ll sqr, temp;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        sqr = sqrt(temp);
        //to check n is prime or not
        if (isPrime(sqr) == true && sqr * sqr == temp)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}