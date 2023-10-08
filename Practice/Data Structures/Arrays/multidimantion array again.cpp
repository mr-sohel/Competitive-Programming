#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[5][5], i, j, sum = 0;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
            cin >> arr[i][j];
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
            sum += arr[j][i];
        cout << sum << endl;
    }

}
