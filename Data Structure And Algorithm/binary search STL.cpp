#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[]= {1, 5, 8, 9, 6, 7, 3, 4, 2, 10};
    sort(a, a+sizeof(a)/sizeof(a[0]));
    for(int i = 0; i < sizeof(a)/sizeof(a[0]);i++ )
        cout<<a[i]<<' ';
    cout<<"\n";
    if(binary_search(a,a+sizeof(a)/sizeof(a[0]), 100))
        cout<<"We Found The Element"<<endl;
    else
        cout<<"We Don't Find the Element"<<endl;
}