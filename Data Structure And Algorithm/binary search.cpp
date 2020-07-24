#include <cstdio>
// The List Must be Sorted 

int binary_search(int a[], int size, int to_find) // Binary Search
{
    int left, right, mid;
    
    left = 0;
    right = size - 1;
    while(left <= right)
    {
        mid = (left + right) / 2;
        if(a[mid] == to_find)
            return mid; 
        if(to_find > a[mid])
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}
int main()
{
    int a[] = {1, 12, 18, 19, 26, 37, 43, 44, 52, 60};
    int loc, to_find;
    scanf("%d", &to_find);
    int size = sizeof(a) / sizeof(a[0]);
    loc = binary_search(a, size, to_find);
    if(loc == -1)
        printf("%d is not found \n", to_find);
    else
        printf("%d is found in location %d\n", to_find, loc+1);
    return 0;
}