#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n1,n2, reminder;
    int t;
    cin>>t;
    cin>>n1>>n2;
    if(n1 < n2)
        swap(n1,n2);
        
    while(true)
    {
        reminder = n2 % n1;
        if(reminder == 0)
            break;
        else
        {
            n2 = n1;
            n1 = reminder;
        }
    }
    cout<<n1<<endl;
    return 0;
}