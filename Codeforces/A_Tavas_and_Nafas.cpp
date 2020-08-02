#include <bits/stdc++.h>
#define endl        '\n'
#define pi          2*acos(0.0)
#define pb(a)       push_back(a)
#define db          double
#define ld          long double
#define ll          long long
#define ull         unsigned long long
#define mod         1000000007
#define inf         1000000000000000001
#define sqr(x)      (x) * (x)
#define gcd(a, b)   __gcd(a, b)
#define lcm(a, b)   ((a/gcd(a,b)) * b)
#define debug(x) 	cerr << #x << " = " << (x) <<endl
#define unsyncIO    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)


using namespace std;

int main()
{
    //please don't laugh at my solution, i am noob. :( . but this is my own solution.
    //freopen("/home/sohel/Documents/my_codes/out.txt", "wt", stdout);
    string s, s2[] = {"one", "two", "three", "four", "five", "six", "seven", "eight","nine"};
    cin >> s;
    if(s.length() == 1) {
        if(s == "0") cout<<"zero"<<endl;
        else if(s == "1") cout<<"one"<<endl;
        else if(s == "2") cout<<"two"<< endl;
        else if(s == "3") cout<<"three"<<endl;
        else if(s == "4") cout<<"four"<<endl;
        else if(s == "5") cout<<"five"<<endl;
        else if(s == "6") cout<<"six"<<endl;
        else if(s == "7") cout<<"seven"<<endl;
        else if(s == "8") cout<<"eight"<<endl;
        else if(s == "9") cout<<"nine"<<endl;
    }
    else if (s.length() == 2) {
        if(s[0] == '1') {
            if(s[1] == '0')
                cout << "ten" << endl;
            for (int i = 11; i <= 19; i++) {
                if (s[1] == '1') {
                    cout << "eleven" << endl;
                    break;
                }
                   
                else if (s[1] == '2') {
                    cout << "twelve"<<endl;
                    break;
                }
                    
                else if (s[1] == '3') {
                    cout << "thirteen" << endl;
                    break;
                }
                    
                else if(s[1] == '4') {
                    cout << "fourteen" << endl;
                    break;
                }
                    
                else if(s[1] == '5') {
                    cout << "fifteen" << endl;
                    break;
                }
                    
                else if(s[1] == '6') {
                    cout << "sixteen" << endl;
                    break;
                }
                    
                else if(s[1] == '7') {
                    cout << "seventeen" << endl;
                    break;
                }
                    
                else if(s[1] == '8') {
                    cout << "eighteen" << endl;
                    break;
                }
                    
                else if(s[1] == '9') {
                    cout << "nineteen" << endl;
                    break;
                }
                    
            }
               
        }
        else if(s[0] == '2') {
            int temp = s[1] - '0';
            if(temp == 0) {
                cout << "twenty" << endl;
            }
            else if(temp == 1) {
                cout << "twenty-" << s2[temp - 1];
            }
            else if(temp == 2) {
                cout << "twenty-" << s2[temp - 1];
            }
            else if(temp == 3) {
                cout << "twenty-" << s2[temp - 1];
            }
            else if(temp == 4) {
                cout << "twenty-" << s2[temp - 1];
            }
            else if(temp == 5) {
                cout << "twenty-" << s2[temp - 1];
            }
            else if(temp == 6) {
                cout << "twenty-" << s2[temp - 1];
            }
            else if(temp == 7) {
                cout << "twenty-" << s2[temp - 1];
            }
            else if(temp == 8) {
                cout << "twenty-" << s2[temp - 1];
            }
            else if(temp == 9) {
                cout << "twenty-" << s2[temp - 1];
            }
        }
        else if (s[0] == '3')
        {
            int temp = s[1] - '0';
            if (temp == 0)
            {
                cout << "thirty" << endl;
            }
            else if (temp == 1)
            {
                cout << "thirty-" << s2[temp - 1];
            }
            else if (temp == 2)
            {
                cout << "thirty-" << s2[temp - 1];
            }
            else if (temp == 3)
            {
                cout << "thirty-" << s2[temp - 1];
            }
            else if (temp == 4)
            {
                cout << "thirty-" << s2[temp - 1];
            }
            else if (temp == 5)
            {
                cout << "thirty-" << s2[temp - 1];
            }
            else if (temp == 6)
            {
                cout << "thirty-" << s2[temp - 1];
            }
            else if (temp == 7)
            {
                cout << "thirty-" << s2[temp - 1];
            }
            else if (temp == 8)
            {
                cout << "thirty-" << s2[temp - 1];
            }
            else if (temp == 9)
            {
                cout << "thirty-" << s2[temp - 1];
            }
        }
        else if (s[0] == '4')
        {
            int temp = s[1] - '0';
            if (temp == 0)
            {
                cout << "forty" << endl;
            }
            else if (temp == 1)
            {
                cout << "forty-" << s2[temp - 1];
            }
            else if (temp == 2)
            {
                cout << "forty-" << s2[temp - 1];
            }
            else if (temp == 3)
            {
                cout << "forty-" << s2[temp - 1];
            }
            else if (temp == 4)
            {
                cout << "forty-" << s2[temp - 1];
            }
            else if (temp == 5)
            {
                cout << "forty-" << s2[temp - 1];
            }
            else if (temp == 6)
            {
                cout << "forty-" << s2[temp - 1];
            }
            else if (temp == 7)
            {
                cout << "forty-" << s2[temp - 1];
            }
            else if (temp == 8)
            {
                cout << "forty-" << s2[temp - 1];
            }
            else if (temp == 9)
            {
                cout << "forty-" << s2[temp - 1];
            }
        }
        else if (s[0] == '5')
        {
            int temp = s[1] - '0';
            if (temp == 0)
            {
                cout << "fifty" << endl;
            }
            else if (temp == 1)
            {
                cout << "fifty-" << s2[temp - 1];
            }
            else if (temp == 2)
            {
                cout << "fifty-" << s2[temp - 1];
            }
            else if (temp == 3)
            {
                cout << "fifty-" << s2[temp - 1];
            }
            else if (temp == 4)
            {
                cout << "fifty-" << s2[temp - 1];
            }
            else if (temp == 5)
            {
                cout << "fifty-" << s2[temp - 1];
            }
            else if (temp == 6)
            {
                cout << "fifty-" << s2[temp - 1];
            }
            else if (temp == 7)
            {
                cout << "fifty-" << s2[temp - 1];
            }
            else if (temp == 8)
            {
                cout << "fifty-" << s2[temp - 1];
            }
            else if (temp == 9)
            {
                cout << "fifty-" << s2[temp - 1];
            }
        }
        else if (s[0] == '6')
        {
            int temp = s[1] - '0';
            if (temp == 0)
            {
                cout << "sixty" << endl;
            }
            else if (temp == 1)
            {
                cout << "sixty-" << s2[temp - 1];
            }
            else if (temp == 2)
            {
                cout << "sixty-" << s2[temp - 1];
            }
            else if (temp == 3)
            {
                cout << "sixty-" << s2[temp - 1];
            }
            else if (temp == 4)
            {
                cout << "sixty-" << s2[temp - 1];
            }
            else if (temp == 5)
            {
                cout << "sixty-" << s2[temp - 1];
            }
            else if (temp == 6)
            {
                cout << "sixty-" << s2[temp - 1];
            }
            else if (temp == 7)
            {
                cout << "sixty-" << s2[temp - 1];
            }
            else if (temp == 8)
            {
                cout << "sixty-" << s2[temp - 1];
            }
            else if (temp == 9)
            {
                cout << "sixty-" << s2[temp - 1];
            }
        }
        else if (s[0] == '7')
        {
            int temp = s[1] - '0';
            if (temp == 0)
            {
                cout << "seventy" << endl;
            }
            else if (temp == 1)
            {
                cout << "seventy-" << s2[temp - 1];
            }
            else if (temp == 2)
            {
                cout << "seventy-" << s2[temp - 1];
            }
            else if (temp == 3)
            {
                cout << "seventy-" << s2[temp - 1];
            }
            else if (temp == 4)
            {
                cout << "seventy-" << s2[temp - 1];
            }
            else if (temp == 5)
            {
                cout << "seventy-" << s2[temp - 1];
            }
            else if (temp == 6)
            {
                cout << "seventy-" << s2[temp - 1];
            }
            else if (temp == 7)
            {
                cout << "seventy-" << s2[temp - 1];
            }
            else if (temp == 8)
            {
                cout << "seventy-" << s2[temp - 1];
            }
            else if (temp == 9)
            {
                cout << "seventy-" << s2[temp - 1];
            }
        }
        else if (s[0] == '8')
        {
            int temp = s[1] - '0';
            if (temp == 0)
            {
                cout << "eighty" << endl;
            }
            else if (temp == 1)
            {
                cout << "eighty-" << s2[temp - 1];
            }
            else if (temp == 2)
            {
                cout << "eighty-" << s2[temp - 1];
            }
            else if (temp == 3)
            {
                cout << "eighty-" << s2[temp - 1];
            }
            else if (temp == 4)
            {
                cout << "eighty-" << s2[temp - 1];
            }
            else if (temp == 5)
            {
                cout << "eighty-" << s2[temp - 1];
            }
            else if (temp == 6)
            {
                cout << "eighty-" << s2[temp - 1];
            }
            else if (temp == 7)
            {
                cout << "eighty-" << s2[temp - 1];
            }
            else if (temp == 8)
            {
                cout << "eighty-" << s2[temp - 1];
            }
            else if (temp == 9)
            {
                cout << "eighty-" << s2[temp - 1];
            }
        }
        else if (s[0] == '9')
        {
            int temp = s[1] - '0';
            if (temp == 0)
            {
                cout << "ninety" << endl;
            }
            else if (temp == 1)
            {
                cout << "ninety-" << s2[temp - 1];
            }
            else if (temp == 2)
            {
                cout << "ninety-" << s2[temp - 1];
            }
            else if (temp == 3)
            {
                cout << "ninety-" << s2[temp - 1];
            }
            else if (temp == 4)
            {
                cout << "ninety-" << s2[temp - 1];
            }
            else if (temp == 5)
            {
                cout << "ninety-" << s2[temp - 1];
            }
            else if (temp == 6)
            {
                cout << "ninety-" << s2[temp - 1];
            }
            else if (temp == 7)
            {
                cout << "ninety-" << s2[temp - 1];
            }
            else if (temp == 8)
            {
                cout << "ninety-" << s2[temp - 1];
            }
            else if (temp == 9)
            {
                cout << "ninety-" << s2[temp - 1];
            }
        }
    }
    return 0;
}