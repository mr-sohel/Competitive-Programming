#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define pi acos(-1)
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    if(s1 == s2)
    cout << "Yes" << endl;
    else
        cout<<"No"<<endl;
    return 0;
}