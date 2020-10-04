#include <bits/stdc++.h>

using namespace std;

int main()
{
    int ara[5] = {50, 60,70,80,90};
    for(int i = 0; i < 5; i++)
        cout<<ara[i]<<' ';
    cout<<endl;
    printf("%p ", &ara);
    for (int i = 0 ; i < 5; i++)
        printf("%p ", &ara[i]);
}
