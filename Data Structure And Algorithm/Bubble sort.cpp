#include <bits/stdc++.h>

using namespace std;

int main()
{
    int array[100],i,j,n;
    printf("Enter The Size of Array\n");
    cin>>n;
    for(i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n-1; j++)
        {
            if(array[j] < array[j+1]) // just change the operator > to sort ascending orders 
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    cout<<"Sorted Array In Dscending Order"<<endl;
    for(i = 0; i < n; i++)
        cout<<array[i]<<' ';
}
