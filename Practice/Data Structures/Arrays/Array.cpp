#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, pos, n, value;
    printf("Enter The Size\n");
    scanf("%d", &n);

    int arr[100];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sort(arr, arr + 5);
    printf("Enter What to check\n");
    scanf("%d", &value);
    if (binary_search(arr, arr + 5, value))
    {
        printf("Yes");
    }
    else
    {
        printf("no");
    }
    return 0;

}
