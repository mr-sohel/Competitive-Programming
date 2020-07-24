#include <bits/stdc++.h>
#define endl "\n"
#define pi acos(-1)
#define faster_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

#define MAX 100001  // limit is 10^6-1
bitset<MAX> marked; //for memory efficient ,

bool isPrime(int n) {
	if (n < 2)
		return false;
	if (n == 2)
		return true;
	if (n % 2 == 0)
		return false;
	return marked[n] == false;
}
void sieve(int n) {
	for (int i = 3; i * i <= n; i += 2) {
		if (marked[i] == false) { // i is a prime
			for (int j = i * i; j <= n; j += i) {
				marked[j] = true;
			}
		}
	}
}
int StringToInt(string &str){
  int res=0;
  for(int i=0;i<(int)str.size();i++)
    res=(res*10+str[i]-'0');
  return res;
}
int main()
{
    //freopen("/home/sohel/Documents/my_codes/out.txt", "wt", stdout);
    faster_io;
    sieve(100000);
    //to check n is prime or not
    string s;

    while(cin>>s) {
    
		int n = StringToInt(s);
		
		if(isPrime(n)) {
			bool check = false;
			for(int i = 0; i < (int) s.size(); i++) {
				if(!isPrime(s[i] - '0')) {
					cout<<"Primo"<<endl;
					check = true;
					break;
				}
			}
			if(check == false)
				cout<<"Super"<<endl;
		}
		else
			cout<<"Nada"<<endl;
	}

	return 0;
}
