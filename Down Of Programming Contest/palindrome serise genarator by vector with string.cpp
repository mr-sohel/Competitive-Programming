#include <bits/stdc++.h>

using namespace std;

int main()
{
    int j,i,n;
    vector<int> palindrome;
    
    for( i = 1; i <= 9;i++)
    {
        palindrome.push_back(i);
        
    }
    for( i = 11; i <= 100; i+= 11)
    {
        palindrome.push_back(i);
    }
    for( i = 101; i <= 200; i+= 10)
    {
        palindrome.push_back(i);
    }
    for( i = 202; i <= 300; i+= 10)
    {
         palindrome.push_back(i);
    }
    for( i = 303; i <= 400; i+= 10)
    {
         palindrome.push_back(i);
    }
    for( i = 404; i <= 500; i+= 10)
    {
         palindrome.push_back(i);
    }
    for( i = 505; i <= 600; i+= 10)
    {
        palindrome.push_back(i);
    }
    for( i = 606; i <= 700; i+= 10)
    {
         palindrome.push_back(i);
    }
    for( i = 707; i <= 800; i+= 10)
    {
         palindrome.push_back(i);
    }
    for( i = 808; i <= 900; i+= 10)
    {
         palindrome.push_back(i);
    }
    for( i = 909; i <= 920; i+= 10)
    {
        palindrome.push_back(i);
    }
   // cout<<j<<endl;      


    for(i = 0; i < 100; i++)
    cout<<palindrome[i]<<endl;
    return 0;
}