#include <iostream>
#include<vector>
using namespace std;

void merge(int *a, int lo, int mid, int hi) {
    int temp[hi - lo + 1];
    int L = lo, R = mid + 1, I = 0;
    while (L <= mid and R <= hi) {
        if (a[L] <= a[R]) {
            temp[I] = a[L];
            L++;
        } else {
            temp[I] = a[R];
            R++;
        }
        I++;
    }

    while (L <= mid) {
        temp[I++] = a[L++];
    }
    while (R <= hi) {
        temp[I++] = a[R++];
    }
    for (int i = lo; i <= hi; i++) {
        a[i] = temp[i - lo];
    }

}

void mergeSort(int *a, int begin, int end) {
    if (begin >= end) return;
    int mid = (begin + end) / 2;
    mergeSort(a, begin, mid);
    mergeSort(a, mid + 1, end);
    merge(a, begin, mid, end);
}

int main() {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    mergeSort(a, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << a[i] << ' ';
    }
    cout << "\n";
}
