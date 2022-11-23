#include <stdio.h>
#include <string.h>

int main() {
    int T, i, len = 0;
    unsigned long long int arr;
    scanf("%d", &T);
    for (i = 0; i < T; i++) {
        scanf("%llu", &arr);
        if (arr >= 0) {
            if (arr % 2 == 0)
                printf("even\n");
            else
                printf("odd\n");
        }

    }

    return 0;
}
