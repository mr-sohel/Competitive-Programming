#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x = 100;
    int* px = &x;
    cout<<x<<endl;
    *px = 4492;
    cout<<px<<endl;
    cout<<*px<<endl;
    return 0;
}