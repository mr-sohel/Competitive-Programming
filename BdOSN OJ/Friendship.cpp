#include <bits/stdc++.h>
#define endl        '\n'
#define db          double
#define ld          long double
#define ll          long long
#define ull         unsigned long long
#define sqr(x)      (x) * (x)
#define gcd(a, b)   __gcd(a, b)
#define lcm(a, b)   ((a/gcd(a,b)) * b)
#define pf(x) 		push_front(x)
#define pb(x)       push_back(x)
#define eb(x)		emplace_back(x)
#define all(x)      (x).begin(), (x).end()
#define rall(x) 	(x).rbegin(), (x).rend()
#define sz(x) 		(int)x.size()
#define debug(x) 	cerr << #x << " = " << (x) <<endl
#define unsyncIO    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const ll INF = 1e18;

using namespace std; 


int main()
{
    //freopen("/home/taalpatar_shepai/Documents/my_codes/out.txt", "w", stdout);
   /*Interesting problem. In this problem you will be given a range ( L <= R).
    You have to find how many “beautiful number” is in the range(inclusive).A beautiful number is two or more consecutive numbers summation that is equal to a number.i.e.5 is a beautiful number.Because 3 + 2 = 5. and 4 is not.
    */
   //Solution :- 
   /*
   If you look at the sample test cases. for 1 - 10 range. there is 6 beautiful numebers. 3,5,6,7,9,10.
   and 5 - 100 there is 92 beautiful numbers. 
   if you think a little bit you will see there is no beautiful number that is 2's square. in 2nd test case. 5 - 100 there is 96 numbers. and if you count how many 2's square in this range is 4. 2^3 = 8, 2^4 = 16, 2^5 = 32, 2^6 = 64.
   so if now you Sub 96 (numbers between the range) - 4 (numbers of 2's power) = 92. that is the answer. 
   */
    unsyncIO;
    int t;
    cin>>t;
    while(t--) {
		int l,r,po2 = 0;
		cin>>l>>r;
		for(int i = 0; i <= r/2; i++) {
			int tx = pow(2,i);
			if(tx > r)
				break; // we don't need to calculate that big number who is greater than R.
			if(tx >= l && tx <=r)
				po2++;
		}
		int temp;
		temp = r - l + 1;
		cout<<temp - po2<<endl;
	}
    
    return 0;
}
