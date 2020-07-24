#include <bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
    int i;
    if(n == 2)
    {
        return true;
    }
    else if(n < 2)
    {
        return false;
    }
    else if (n % 2 == 0)
    {
        return false;
    }
    else
    {
        for(i = 3; i < sqrt(n); i = i + 2)
        {
            if(n % i == 0)
            {
                return false;
                break;
            }
        }
        return true;
    }    
}
int main()
{
    int n,i;
    bool check;
    cin>>n;
    check = isprime(n);
    if (check == true)
    {
        cout<<"NO PUNISHMENT";
    }
    else
    {
        for(i = 0; i < n; i++)
        {
            cout<<"I DID NOT DO THE ASSIGNMENT."<<endl;
        }
    }
    return 0;
}
