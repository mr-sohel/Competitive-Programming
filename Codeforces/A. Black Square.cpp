#include <bits/stdc++.h>
#define endl "\n"
#define pi acos(-1)
#define faster_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main()
{
    faster_io;
    //freopen("/home/sohel/Documents/my_codes/out.txt", "wt", stdout);
    int a1, a2, a3, a4, calories = 0;
    string s;
    cin>>a1>>a2>>a3>>a4;
    cin>>s;
    int len = s.length();
    for(int i = 0; i < len; i++) {
        if(s[i] == '1') 
            calories += a1;
        else if(s[i] == '2') 
            calories += a2;
        else if( s[i] == '3')
            calories += a3;
        else if(s[i] == '4') 
            calories += a4;
    }

    cout<<calories<<endl;

    return 0;
}