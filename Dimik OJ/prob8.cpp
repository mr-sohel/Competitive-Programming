#include <stdio.h>

#include <algorithm>
int main() {
    //freopen("out.txt", "w", stdout);
    int T;
    int arr[3];
    scanf("%d", &T);
    int tc = 1;
    while (T--) {
        scanf("%d%d%d", &arr[0], &arr[1], &arr[2]);
        std::sort(arr, arr + 3);
        printf("Case %d: %d %d %d\n", tc++, arr[0], arr[1], arr[2]);
    }
    return 0;
}
