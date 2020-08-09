#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    string word;
    cin>>t;
    getchar();
    while(t--)
    {
        getline(cin, word);
        for(int i = 0; i < word.length(); i++)
        {
            if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u')
            cout<<word[i];
        }
        cout<<endl;
        for(int i = 0; i < word.length(); )
        {
            if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == ' ')
            {
                i++;
            }
            else
            {
                cout<<word[i];
                i++;
            }
        }
        cout<<endl;        
    }
    return 0;    
}