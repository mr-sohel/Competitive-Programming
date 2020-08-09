#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    vector <int> v;
    for(int i = 0; i < 3; i++)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    //cout<< max(v.begin(), v.end()) <<endl;
    cout<<v[2]<<endl;

    return 0;
}