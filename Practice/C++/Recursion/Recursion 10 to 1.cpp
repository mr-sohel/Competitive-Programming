#include <bits/stdc++.h>

using namespace std;

void func(int n) {
    if(n == 0) return;
    //cout << n << endl;
    
    func(n-1);
    cout << n << endl;
}

int main()
{
    //freopen("/home/taalpatar_shepai/Documents/my_codes/out.txt", "w", stdout);
    func(10);
    return 0;
}
