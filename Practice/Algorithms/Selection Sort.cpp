/**
 *  Author:  Sohel Rana
 *  Date:    2020-10-24 18:21:03
 *  Task:    Selection Sort
**/
#include <bits/stdc++.h>

using namespace std;

void selection_sort(int arr[], int n) {
    int small, index_min, i, j;

    for (i = 0; i < n - 1; i++) {
        index_min = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[index_min]) {
                index_min = j;
            }
        }
        if (index_min != i)
            swap(arr[i], arr[index_min]);
    }
}

int main()
{
    int arr[10] = {3, 44, 38, 5, 15, 26, 27, 2, 46, 4};
    selection_sort(arr, 10);
    for (int i = 0; i < 10; i++) cout << arr[i] << ' ';
    return 0;
}
