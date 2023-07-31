#include <bits/stdc++.h>
using namespace std;

int main()
{
	int s,e,sum = 0;
	cin>>s>>e;
	if (s == e && e == s)
	{
        cout<<"O JOGO DUROU "<<24<<" HORA(S)"<<endl;
	}
    else if (s < e)
    {
        cout<<"O JOGO DUROU "<<e-s<<" HORA(S)"<<endl;
    }
    else
    {
        for (;s != e+24; s++)
        {
            sum++;
        }
        cout<<"O JOGO DUROU "<<sum<<" HORA(S)"<<endl;
    }
    return 0;
}

