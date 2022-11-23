#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char n[10000000];
int main() {
    //freopen("out.txt", "w", stdout);
    int t;
    scanf("%d", &t);
    while (t--) {
        scanf(" %[^\n]", &n);
        char *p, *e;
        long input;
        int count = 0;
        p = n;
        for (p = n;; p = e) {
            input = strtol(p, &e, 10);
            if (p == e) {
                break;
            }
            count++;
        }
        printf("%d\n", count);
    }
    return 0;
}
