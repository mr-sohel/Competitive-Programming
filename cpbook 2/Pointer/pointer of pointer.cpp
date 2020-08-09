#include <bits/stdc++.h>
using namespace std;

void change(int *p) {
    *p  = 20;
    printf("%d\n", *p);
}

int main()
{
    int x = 10;
    printf("%d\n", x);
    int *ptr = &x;
    change(ptr);
    printf("%d\n", x);
}
