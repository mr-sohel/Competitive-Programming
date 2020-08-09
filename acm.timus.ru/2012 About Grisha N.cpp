#include <bits/stdc++.h>

using namespace std;

int main()
{
    int problem_left = 0, f;
    cin>>f;
    problem_left = 12 - f;
    //cout<<problem_left<<endl;
    if((240 / 45) >= problem_left)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
	return 0;
}