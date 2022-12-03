#include <iostream>
#include <math.h>
#include <stdbool.h>
using namespace std;

bool isprime(int n) {
    if (n < 2)
        return false;
    else if (n == 2)
        return true;
    else if (n % 2 == 0)
        return false;
    else {
        int ck = 0;
        for (int i = 3; i <= sqrt(n); i = i + 2) {
            if (n % i == 0) {
                ck = 1;
                break;
            }
        }
        if (ck == 0)
            return true;
        else
            return false;
    }
}

int main() {
    int t, count = 0, n1, n2;
    bool answer;
    cin >> t;
    while (t--) {
        cin >> n1 >> n2;
        for (int i = n1; i <= n2; i++) {
            answer = isprime(i);
            if (answer == true)
                count++;
        }
        cout << count << endl;
        count = 0;
    }
    return 0;
}