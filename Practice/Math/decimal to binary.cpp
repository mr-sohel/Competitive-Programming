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
#define unsyncIO    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)


using namespace std;

/* A C++ program to implement itoa() */
int bin(int n)
{
    int a = 1, ans = 0;
    while (n > 0)
    {
        ans += n % 2 * a;
        a *= 10;
        n /= 2;
    }
    return ans;
}

/* A utility function to reverse a string */
void reverse(char str[], int length)
{
    int start = 0;
    int end = length - 1;
    while (start < end)
    {
        swap(*(str + start), *(str + end));
        start++;
        end--;
    }
}

// Implementation of itoa()
char *itoa(int num, char *str, int base)
{
    int i = 0;
    bool isNegative = false;

    /* Handle 0 explicitely, otherwise empty string is printed for 0 */
    if (num == 0)
    {
        str[i++] = '0';
        str[i] = '\0';
        return str;
    }

    // In standard itoa(), negative numbers are handled only with
    // base 10. Otherwise numbers are considered unsigned.
    if (num < 0 && base == 10)
    {
        isNegative = true;
        num = -num;
    }

    // Process individual digits
    while (num != 0)
    {
        int rem = num % base;
        str[i++] = (rem > 9) ? (rem - 10) + 'a' : rem + '0';
        num = num / base;
    }

    // If number is negative, append '-'
    if (isNegative)
        str[i++] = '-';

    str[i] = '\0'; // Append string terminator

    // Reverse the string
    reverse(str, i);

    return str;
}

// Driver program to test implementation of itoa()
int main()
{
    char str[100];
    int n;
    cin >> n;
    //std::string binary = std::bitset<8>(n).to_string();
    cout << "Base:10 " << itoa(n, str, 10) << endl;
    cout << "Base:10 " << itoa(-n, str, 10) << endl;
    cout << "Base:2 " << itoa(n, str, 2) << endl;
    cout << "Base:8 " << itoa(n, str, 8) << endl;
    cout << "Base:16 " << itoa(n, str, 16) << endl;

    return 0;
}
