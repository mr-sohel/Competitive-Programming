#include <bits/stdc++.h>
#define endl "\n"
#define pi acos(-1)
#define faster_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main()
{
    //freopen("/home/sohel/Documents/my_codes/out.txt", "wt", stdout);
    faster_io;
    long long int i, j, b, k, n = 0;
    cin >> b >> k;
    int a[k];
    b %= 2;
    for (i = 0; i < k; i++)
    {
        cin >> a[i];
    }
    for (j = 0, i = k; i >= 1; j++, i--)
    {
        n += (a[j] * pow(b, i - 1));
    }

    //cout<<n<<endl;

    if (n % 2 == 0)
    {
        cout << "even" << endl;
    }
    else
    {
        cout << "odd" << endl;
    }
    return 0;
}
