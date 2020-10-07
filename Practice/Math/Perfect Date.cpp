//https://toph.co/p/perfect-date

#include <bits/stdc++.h>
#include <sstream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int d1,m1,y1,d2,m2,y2;
        char slass;
        cin>>d1>>slass>>m1>>slass>>y1;
        cin>>d2>>slass>>m2>>slass>>y2;
        if(((d1==d2) && (m1 == m2) && (y1 == y2))||((d1 == m2) && (d2 == m1) && (y1 == y2)))
        {
            cout<<"Same\n";
        }
        else
            cout<<"Different\n";
        }
    
    return 0;
}
