#include <bits/stdc++.h>
#define endl "\n"
#define pi acos(-1)
#define faster_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main()
{
    //freopen("/home/sohel/Documents/my_codes/out.txt", "wt", stdout);
    int t;
    string name;
    float cgpa;
    cin >> t;
    multimap<float, string> m;
    multimap<float, string>::iterator it;
    for (int i = 0; i < t; i++)
    {
        cin >> name >> cgpa;
        m.insert(make_pair(cgpa, name));
    }
    //sort(m.begin(), m.end());
    for (it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
        return 0;
}