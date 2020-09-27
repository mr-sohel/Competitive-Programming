#include <iostream>

#include <string>

using namespace std;

int main()
{
    string s;
    int i,j,ck;
    getline(cin,s);
    //cout<<s<<endl;
    for( i = s.length()-1; i >= 0; i--)
    {
       if(s[i] == ' ')
        {
            ck = i;
            for( j = ck; j < s.length(); j++);
            {
                cout<<s[j];
            }
            //i--;
        }
        
    }  
    
    
}