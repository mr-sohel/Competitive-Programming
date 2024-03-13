/**
 *    Author:  Sohel Rana
 *    Date:    2020-10-23 17:27:59
 *    Link:    link
**/
#include <bits/stdc++.h>
#define endl        '\n'

using namespace std;

void insertion_sort(int arr[], int n) {
    int item, j;
    for (int i = 1; i < n; i++) {
        item = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > item) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = item;
    }
}

int main()
{
    int arr[] = {44, 3, 38, 5, 47, 15, 36, 26, 27, 2};
    insertion_sort(arr, 10);
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << ' ';
    }
    return 0;
}
