#include <bits/stdc++.h>
#define endl "\n"
#define pi acos(-1)
#define faster_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main()
{
    //freopen("/home/sohel/Documents/my_codes/out.txt", "wt", stdout);
    faster_io;
    string s;
    cin >> s;
    int size, cnt_sign = 0, j;
    int length = (int) s.length();
    for (int i = 0; i < length; i++) {
        if(s[i] == '+')
            cnt_sign++;
    }
    size = length - cnt_sign;
    int arr[size];
    for (int i = 0, j = 0; i < length; j++, i = i + 2) {
        arr[j] = s[i] - 48;
    }
    sort(arr, arr + size);
    for (int i = 0; i < size; i++)
    {
        if(i == size-1)
            cout << arr[i];
        else
            cout << arr[i] << '+';
    }

    return 0;
}