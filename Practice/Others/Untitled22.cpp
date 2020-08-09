#include <iostream>
#include <algorithm>
#include <string>

using namespace std;




int main() {
int examples;
cin >> examples;
for (size_t i = 0; i < examples; i++)
{
    long long unsigned int  n;
    cin >> n;
    string * numbers = new string[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    sort(numbers, numbers + n);

    if (n % 2 == 0) {
        cout << numbers[n / 2 - 1];
    }
    else
        cout << numbers[n / 2];s
}

system("pause");
return 0;
}
