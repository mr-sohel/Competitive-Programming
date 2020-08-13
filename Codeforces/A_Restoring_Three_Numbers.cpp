#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x[4];
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &x[i]);
    }
    sort(x, x + 4);
    printf("%d %d %d\n", x[3] - x[0], x[3] - x[1], x[3] - x[2]);
    return 0;
}