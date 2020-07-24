#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    if(s.length() < 3)
        cout<<"byte"<<endl;
    else if(s.length() == 3)
    {
        if(s > "127")
            cout<<"short"<<endl;
        else
            cout<<"byte"<<endl;

    }
    else if(s.length() > 3 && s.length() < 5)
        cout<<"short"<<endl;
    else if(s.length() == 5)
    {
        if(s > "32767")
            cout<<"int"<<endl;
        else
            cout<<"short"<<endl;
    }
    else if(s.length() > 5 && s.length() < 10)
        cout<<"int"<<endl;
    else if(s.length() == 10)
    {
        if(s > "2147483647")
            cout<<"long"<<endl;
        else
            cout<<"int"<<endl;
    }
    else if(s.length() > 10 && s.length() < 19)
        cout<<"long"<<endl;
    else if(s.length() == 19)
        {
            if(s > "9223372036854775807")
                cout<<"BigInteger"<<endl;
            else
                cout<<"long"<<endl;
        }
    else if(s.length() > 19)
        cout<<"BigInteger"<<endl;
}