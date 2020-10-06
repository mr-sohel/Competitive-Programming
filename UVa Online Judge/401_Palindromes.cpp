/**
 *    Author:  Sohel Rana 
 *    Date:    06-10-2020
**/
#include <bits/stdc++.h>
#define endl        '\n'
#define db          double
#define ld          long double
#define ll          long long
#define ull         unsigned long long
#define sqr(x)      (x) * (x)
#define gcd(a, b)   __gcd(a, b)
#define lcm(a, b)   ((a/gcd(a,b)) * b)
#define pf(x) 		push_front(x)
#define pb(x)       push_back(x)
#define eb(x)		emplace_back(x)
#define all(x)      (x).begin(), (x).end()
#define rall(x) 	(x).rbegin(), (x).rend()
#define sz(x) 		(int)x.size()
#define debug(x) 	cerr << #x << " = " << (x) <<endl
#define unsyncIO    ios_base::sync_with_stdio(0); cin.tie(0)

const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const ll INF = 1e18; 

using namespace std;
string m = "12358AEHIJLMOSTUVWXYZ";

bool isPalindrome(string s) {
    string temp;
    temp = s;
    reverse(all(s));
    if (temp == s)
        return true;
    else
        return false;
}

bool isMirroredString (string s) {
    string mirrored;
    
    for (int i = 0; i < s.length(); i++) {
        if(binary_search(all(m), s[i])) {
            if (s[i] == 'A')
                mirrored += 'A';
            else if (s[i] == 'E')
                mirrored += '3';
            else if (s[i] == '3')
                mirrored += 'E';
            else if (s[i] == 'H')
                mirrored += 'H';
            else if (s[i] == 'I')
                mirrored += 'I';
            else if (s[i] == 'J')
                mirrored += 'L';
            else if (s[i] == 'L')
                mirrored += 'J';
            else if (s[i] == 'M')
                mirrored += 'M';
            else if (s[i] == 'O')
                mirrored += 'O';
            else if (s[i] == 'S')
                mirrored += '2';
            else if (s[i] == '2')
                mirrored += 'S';
            else if (s[i] == 'T')
                mirrored += 'T';
            else if (s[i] == 'U')
                mirrored += 'U';
            else if (s[i] == 'V')
                mirrored += 'V';
            else if (s[i] == 'W')
                mirrored += 'W';
            else if (s[i] == 'X')
                mirrored += 'X';
            else if (s[i] == 'Y')
                mirrored += 'Y';
            else if (s[i] == '1')
                mirrored += '1';
            else if (s[i] == '5')
                mirrored += 'Z';
            else if(s[i] == 'Z')
                mirrored += '5';
            else if (s[i] == '8')
                mirrored += '8';
        }
        else {
            return false;
        }
    }
    reverse(all(s));
    if (s == mirrored)
        return true;
    else
        return false;
}

int main()
{
    //freopen("/home/taalpatar_shepai/Documents/my_codes/out.txt", "w", stdout);
    //unsyncIO;
    
    string s;

    while (cin >> s) {
        if (isPalindrome(s)) {
            if (isMirroredString(s)) {
                cout << s << " -- is a mirrored palindrome." << endl;
                puts("");
            } else {
                cout << s << " -- is a regular palindrome." << endl;
                puts("");
            }
        } else if (isMirroredString(s)) {
            cout << s << " -- is a mirrored string." << endl;
            puts("");
        } else {
            cout << s << " -- is not a palindrome." << endl;
            puts("");
        }
    }
    return 0;
}