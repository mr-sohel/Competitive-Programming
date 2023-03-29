// Link: https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/B

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    int a[n], b[m];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }
    int ans[m], cnt = 0, i = 0, j = 0;
    while (j < m) {
        while (i < n) {
            if (a[i] < b[j]) {
                cnt++;
                i++;
            } else break;
        }
        ans[j++] = cnt;
    }
    for (int i = 0; i < m; i++) {
        printf("%d ", ans[i]);
    }
    return 0;
}
