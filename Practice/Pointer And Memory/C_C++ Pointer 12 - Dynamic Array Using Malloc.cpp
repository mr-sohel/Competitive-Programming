#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n;
    cin >> n;
    int* ar = (int*)malloc(sizeof(int)*n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", ar[i]);
    }
        return 0;
}