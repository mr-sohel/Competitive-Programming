#include <bits/stdc++.h>
#define endl '\n'
#define pi acos(-1)
#define faster_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

bool isPrime(long long int n) // basic algorithm
{
    if (n < 2)
        return false;
    else if (n == 2)
        return true;
    else if (n % 2 == 0) // the only even prime is 2; so we don't need to check other evens
        return false;

    for (long long int i = 3; i*i <= n; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
/* // this is might faster than mine.
int isPrime(int n)
{
	if(n<=1) return false;
	if(n<=3) return true;

	if(n%2==0 || n%3==0)
		return false;
	// Main Code

	for(int i=5; i*i<=n; i+=6)
	{
		if(n%i==0 || n%(i+2)==0)
			return false;
	}

	return true;
}
 */
int main()
{
    //freopen("/home/sohel/Documents/my_codes/out.txt", "wt", stdout);
    long long int n;
    cin >> n;
    bool check = isPrime(n);
    if(check)
        cout << "Prime" << endl;
    else 
        cout<<"Not Prime"<<endl;

    return 0;
}
