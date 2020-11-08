#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--) {
        int n, i;
        cin >> n >> i;
        cout << n <<" left Shift " << i << " = " << (n >> i) << endl; 
        //left shift is (<<) . it shifts all bits i times to the left. 
        // 64 32 16 8 4 2 1
    }
    return 0;
}