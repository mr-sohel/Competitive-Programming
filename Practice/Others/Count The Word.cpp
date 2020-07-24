#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        set <string> s;
        for(int i = 0; i < n; i++)
        {
            string temp;
            cin>>temp;
            s.insert(temp);
        }
        cout<<s.size()<<endl;
    }
}