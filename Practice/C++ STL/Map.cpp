#include <bits/stdc++.h>
#include <map>

using namespace std;

int main() 
{
	map <int, string> m;
	map<int, string>::iterator it;
	// m["arnob"] = 16;
	// m["sohel"] = 16;
	// m["jayanta"] = 42;
	// m["salman"] = 21;
	//m["labu"] = 22;
	// m.insert(make_pair("labu", 22));
	m[16] = "arnob";
	m[2] = "labu";
	m.insert(make_pair(21, "salman"));

	for (it = m.begin(); it != m.end(); it++) {
		cout << it ->first<<' '<< it->second << endl;
	}
		return 0;
}
