#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v;
    for(int i = 0; i < 20; i++)
        v.push_back(rand());
    for(int i = 0; i < 20; i++)
        cout<<v[i]<<" ";
    return 0;
}