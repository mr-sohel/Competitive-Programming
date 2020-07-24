#include <bits/stdc++.h>
#include <sstream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    string s;
    while(true)
    {
        cin>>s;
        if(s == "#")
            break;
        else if(s == "HELLO")
            cout<<"Case "<<t<<": "<<"ENGLISH\n";
        else if(s == "HOLA")
             cout<<"Case "<<t<<": "<<"SPANISH\n";
        else if(s == "HALLO")
             cout<<"Case "<<t<<": "<<"GERMAN\n";
        else if(s == "BONJOUR")
            cout<<"Case "<<t<<": "<<"FRENCH\n";
        else if(s == "CIAO")
             cout<<"Case "<<t<<": "<<"ITALIAN\n";
        else if(s == "ZDRAVSTVUJTE")
             cout<<"Case "<<t<<": "<<"RUSSIAN\n";
        else 
             cout<<"Case "<<t<<": "<<"UNKNOWN\n";
        t++;
    }
    return 0;
    
}