/**
 *    Author:  Sohel Rana
 *    Date:    2020-10-19 23:00:15
 *	  Link:    link
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
#define unsyncIO    ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0)

const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const ll INF = 1e18; 

using namespace std;

int main()
{
    //freopen("/home/taalpatar_shepai/Documents/my_codes/out.txt", "w", stdout);
    unsyncIO;
    int t;
    while(cin>> t) {
        if (t == -1)
            break;
        else {
            int stroks = 0, currect_guess = 0;
            string word, guess;
            cin >> word;
            cin >> guess;
            set<char> sw;

            for (int i = 0; i < word.length(); i++) {
                sw.insert(word[i]);
            }
            bool printed = false;
            for (int i = 0; i < guess.length(); i++) {
                if (binary_search(all(sw), guess[i])) {
                    char ch;
                    for (int j = 0; j <= i; j++) {
                        bool check = false;
                        ch = guess[j];
                        //debug(ch);
                        for (int k = 0; k < i; k++) {
                            if (guess[k] == ch) {
                                check = true;
                                break;
                            }
                        }
                        if (!check)
                            currect_guess++;
                    }

                } else {
                    char ch;
                    for (int j = 0; j <= i; j++) {
                        bool check = false;
                        ch = guess[j];
                        //debug(ch);
                        for (int k = 0; k < i; k++) {
                            if (guess[k] == ch) {
                                check = true;
                                break;
                            }
                        }
                        if (!check)
                            stroks++;
                    }
                }
                if (currect_guess == sw.size() and stroks < 7 ) {
                    cout << "Round " << t << endl;
                    cout<< "You win." << endl;
                    printed = true;
                    break;
                } else if (stroks == 7 and currect_guess < sw.size()) {
                    cout << "Round " << t << endl;
                    cout << "You lose." << endl;
                    printed = true;
                    break;
                }
            }
            if (stroks < 7 and currect_guess < sw.size() and printed == false) {
                cout << "Round " << t << endl;
                cout << "You chickened out." << endl;
            }
        }
    }
   
    return 0;
}