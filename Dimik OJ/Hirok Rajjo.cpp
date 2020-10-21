#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("out.txt", "w", stdout);
    int n, m, t;
    cin>>t;
    while(t--)
    {
        int i, j;
        cin >> n >> m;
        for(i = 1; i <= n; i++)
        {
            for(j = 1; j <= i; j++) {
                if(i != j)
                    cout << m << " ";
                else
                    cout << m;
            }
            cout<<endl;
        }
        for (i = n - 1; i >= 1; i--) {
            for (j = 1; j <= i; j++) {
                if (j == i)
                    cout << m;
                else
                    cout << m <<" ";
            }
            printf("\n");
        }
        printf("\n");
    }
	return 0;
}
