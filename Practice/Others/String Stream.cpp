#include <bits/stdc++.h>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
	string line;
	while(getline(cin, line)) {
		stringstream ss(line);
		int num;
		vector <int> v;
		while(ss >> num)
			v.push_back(num);
		sort(v.begin(), v.end());
		
		for(int i = 0; i < (int) v.size(); i++) {
			printf("%d ", v[i]);
		}
	}
	return 0;
}
