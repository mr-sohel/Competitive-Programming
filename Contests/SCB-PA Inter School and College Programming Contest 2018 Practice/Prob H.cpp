#include <cstdio>
#include <math.h>
#define ulong unsigned long long

bool is_beautiful(ulong n)
{
    if (n == 1 || n == 2)
        return false;

    for (ulong i = 1;; i++)
    {
        ulong temp = 0;
        for (ulong k = i; k <= ceil(n / 2.0); k++)
        {
            temp += k;
            if (temp == n)
                return true;
        }
        if (i == ceil(n / 2.0))
            break;
    }
    return false;
}

int main()
{
    ulong l,r,ans = 0;
    int t;
    scanf("%d", &t);
    while(t--)
    {
        
        scanf("%llu %llu", &l, &r);
        for(ulong i = l; i <= r; i++)
        {
            if(is_beautiful(i))
                ans++;
        }
        printf("%llu\n", ans);
        ans = 0;
    }
    return 0;
}