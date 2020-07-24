#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    vector <int> v;
    vector <int>:: iterator it;
    v.push_back(20);
    v.push_back(2);
    v.push_back(50);
    cout<<v.size()<<endl;
    for(auto x: v)
        cout<<x<<endl;

    sort(v.begin(), v.end());
    it = v.begin();
    for(; it != v.end();it++)
        cout<<*it<<'\t';

}
