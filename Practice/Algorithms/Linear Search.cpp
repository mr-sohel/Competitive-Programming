#include <cstdio>

// Linear Search complexity is O(n);
// Thanks Tamim Shahriar Subeen

int linear_search(int a[], int to_find)
{
    for(int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    {
        if(a[i] == to_find)
            return i;
    }
    return -1;
}

int main()
{
    int n,result;
    scanf("%d", &n);
    int a[10] = {10,6,45,21,30,46,50,41,12,100};
    result = linear_search(a,n);
    if(result == -1) 
        printf("%d is not found in the array\n", n);
    else
        printf("%d is found in location %d\n", n, result+1);
}