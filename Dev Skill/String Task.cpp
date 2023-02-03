#include <bits/stdc++.h>
using namespace std;

int main() {
    int i, j;
    char s[101], s2[101];
    //string s,s2;
    scanf("%s", s);
    for (int i = 0; i < strlen(s) ; i++) {
        if (isupper(s[i])) {
            s[i] = tolower(s[i]);
        }
    }
    for (i = 0, j = 0; i < strlen(s); i++) {
        if (s[i] == 'a' || s[i] == 'o' || s[i] == 'y' || s[i] == 'e' || s[i] == 'u' || s[i] == 'i') {

            //do nothing
        } else {
            s2[j] = s[i];
            j++;
        }
    }
    s2[j] = '\0';
    for (i = 0; i < strlen(s2); i++) {
        printf(".%c", s2[i]);
    }
    //cout<<endl;
    //cout<<s2<<endl;
}
