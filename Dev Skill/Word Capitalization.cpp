#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    if (islower(s.at(0))) {
        s.at(0) = toupper(s.at(0));
    }
    cout << s << endl;
    return 0;
}
