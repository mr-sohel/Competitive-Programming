#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define pi acos(-1)
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int size = s1.length();
    int count[size] = {0};
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            if(s1[i] == s2[j])
                count[i]++;
        }
    }
    // for(int i = 0;i < size; i++)
    //     cout<<count[i]<<' ';
    // cout<<endl;
    bool check = false;
    for(int i = 0; i < size; i++)
    {
        if(count[i] > 1 || count[i] == 0)
        {
            check = false;
            break;
        }
        else
            check = true;
    }
    if(check)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    cout<<pi<<endl;
    return 0;
}