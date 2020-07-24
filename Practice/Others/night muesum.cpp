#include <bits/stdc++.h>
using namespace std;

int main()
{

    //this mathod is worng . 
    string name, abc ="abcdefghijklmnopqrstuvwxyz";
    cin >> name;
    int start = 0, count = 0, ans = 0;
    for (int i = 0; i < name.length(); i++)
    {
        for (int j = start; j < 26; j++)
        {

            if (abc[j] == (name[i]))
                break;
            else
                count++;
        }
        start = count;
        if(count > 13) {
            ans += 26 - count;
        }
        else 
            ans += count;
    }


    cout << ans << endl;
    return 0;
}
