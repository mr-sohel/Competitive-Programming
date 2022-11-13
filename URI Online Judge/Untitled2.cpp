#include <stdio.h>

int main() {
    int dif, x, y, i, sum = 0;
    scanf("%d%d", &x, &y);
    if ( x > y) {
        dif = (x - y);
        y++;
        for (i = 1; i <= dif; i++) {
            if (x > y) {
                if (y % 2 != 0) {
                    sum += y;
                }
                y++;
            }
        }
    }

    printf("%d\n", sum);
    return 0;
}
