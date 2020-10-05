#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int x = 20;
    int *px = &x;
    cout << *px << endl;
    int **pxx = &px; 
    cout << **pxx;
}