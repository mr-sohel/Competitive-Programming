#include <bits/stdc++.h>

using namespace std;
int main()
{
    int i,n,temp,position = 0;
    cin >> n;
    int arr1[n], arr2[n];

    for (i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];
    }
    sort(arr1, arr1 +n);
    temp = arr1[0];
    for (i = 0; i < n; i++)
    {
        if (arr2[i] == temp )
        {
            position = i;
        }
    }
    cout<<"Menor valor: "<<temp<<'\n'<<"Posicao: "<<position<<endl;
}
