#include <bits/stdc++.h>

using namespace std;
int main()
{
    int A, N,j,sum = 0,i;
    cin>>A>>N;
    if(N <= 0)
    {
        //cin>>N;
        while(1)
        {
            cin>>N;
            if (N > 0)
                break;
        }

    }
        for (j = A,i = 0; i < N; j++,i++)
        {
            sum += j;
        }
        cout<<sum<<endl;


    return 0;
}
