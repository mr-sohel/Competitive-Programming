#include <bits/stdc++.h>
using namespace std;
void func()
{
    int a = 10;
    static int b = 10;
     a += 2;
     b += 2;
     cout<<a<<" "<<b<<endl;
}
int main()
{
   func();
   func();
   func();
}
