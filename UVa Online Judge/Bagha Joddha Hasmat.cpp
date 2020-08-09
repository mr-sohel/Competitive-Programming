#include <iostream>
#include <math.h>

using namespace std;
#define endl '\n'
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    long double a,b;
    while(cin>>a>>b)
        printf("%.0LF\n", abs(a-b));
    return 0;
}
