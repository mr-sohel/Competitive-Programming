#include <stdio.h>

int main() {
    //freopen("out.txt", "w", stdout);
    int T, N, i, j, k;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &N);
        for (j = 0; j < N; j++) {
            for (k = 0; k < N; k++) {
                printf("*");
            }
            printf("\n");
        }
        if (T != 0)
            printf("\n");
    }
    return 0;
}