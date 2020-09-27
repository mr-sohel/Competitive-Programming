#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    string s;
    cin>>t;
    while(t--)
    {
        getchar();
        int count = 0;
        getline(cin, s);
        for(int i = 0; i < s.length(); i++)
        {
            if (s [i] != '.' && s[i] != ',' && s[i] != '!' && s[i]!= ';' && s[i] != '"' && s[i] != '?' && (s[i] == ' '))
                count++;
        }
        cout<<"Count = "<<count+1<<endl;
        count = 0;
    }
    return 0;
}