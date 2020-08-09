#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define pi acos(-1)
int main()
{
    //freopen("/home/sohel/Desktop/CPP Codes/out.txt", "wt", stdout);
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL); // for faster I/O
    //cout.tie(NULL);

    int n,a = 0,d = 0;
    string s;
    cin>>n;
    cin>>s;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == 'A')
            a++;
        else
            d++; 
    }
    if(a > d)
        cout<<"Anton"<<endl;
    else if(a < d)
        cout<<"Danik"<<endl;
    else 
        cout<<"Friendship"<<endl;

    return 0;
}