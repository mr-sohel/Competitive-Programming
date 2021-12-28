/**
 *	Author:  Sohel Rana
 *	Date:    2021-12-28 19:56:30
 *	Task:    I_Count_Vowels 
**/
#include <bits/stdc++.h>

using namespace std;

int cn;

void cnt(string s, int len, int i) {
    if (i >= len){
        return;
    }
    cnt(s, len, i + 1);
    if (s[i] == 'a' or s[i] == 'A' or s[i] == 'e' or s[i] == 'E' or s[i] == 'i' or s[i] == 'I' or s[i] == 'o' or s[i] == 'O' or s[i] == 'u' or s[i] == 'U'){
        cn++;
    }
}
int main() 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    string s;
    getline(cin,s);
    cnt(s, (int)s.length(), 0);
    cout << cn << endl;

    return 0;
}