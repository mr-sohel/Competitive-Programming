#include <stdio.h>

int main() {
    int n1, n2, n3, temp, t, i;
    scanf("%d", &t);
    for (i = 0; i < t; i++) {
        scanf("%d%d%d", &n1, &n2, &n3);
        if (n1 > n2) {
            temp = n1;
            n1 = n2;
            n2 = temp;
        }
        if (n1 > n3) {
            temp = n1;
            n1 = n3;
            n3 = temp;
        }
        if (n2 > n3) {
            temp = n2;
            n2 = n3;
            n3 = temp;
        }
        printf("Case %d: %d %d %d\n", i + 1, n1, n2, n3);
    }

}
