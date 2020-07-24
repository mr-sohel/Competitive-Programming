#include <bits/stdc++.h>
#define endl "\n"
#define pi acos(-1)
#define faster_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main()
{
    //freopen("/home/sohel/Documents/my_codes/out.txt", "wt", stdout);
    int n,temp;
    cin >> n;
    temp = n % 1000;
    if (temp == 0)
    {
        cout << temp << endl;
    }
    else {
        cout << 1000 - temp << endl;
    }
    return 0;
}