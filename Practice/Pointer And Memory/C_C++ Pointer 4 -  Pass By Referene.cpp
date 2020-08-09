#include <bits/stdc++.h>

using namespace std;

void change(int* px)
{
    *px = 20;
    cout<<*px<<" in change functions"<<endl;
}

int main()
{
    int x = 10;   
    cout<<x<<" in main function before change"<<endl;
    change(&x);
    cout<<x<<" in main function"<<endl;
    return 0;
}