#include <bits/stdc++.h>

using namespace std;

/*
    if ith bit of number A and B are same xor will give you zero.
    if and only if ith bit of two interget in different 
    if you perform xor of two same number , the number will become zero. i.e A^A = 0
    ordering doesn't metter in xor.
*/

int main() 
{
    int a, b;
    cin >> a >> b;
    int c = a ^ b; // a xor b
    cout << c;
}