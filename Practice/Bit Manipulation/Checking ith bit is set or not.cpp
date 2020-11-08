#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int F = 1;
    int N, index;
    cin >> N >> index;
    F = F << index;
    if(F & N)
        cout << "Set" << endl;
    else
        cout << "Not Set" << endl;
    return 0;
}