
struct object {
	int day, month, year;
};

bool cmp(object a, object b) {//must maintain strict order (">" ro "<" ) in comparator function, never use <= or >= here.
	return a.year > b.year; 	// > bigger first, < smaller first.
	// return ((a.year > b.year) or (a.year == b.year and a.month > b.month) or (a.year == b.year and a.month == b.month and a.day > b.day));
}

bool cmp2(pair<int, int>p, pair<int, int>q) {
	return p.second > q.second; // sort pair according to second value; bigger comes first.
}

int main() {

	vector<object> vec;

	vec.push_back({10, 1, 2000});
	vec.push_back({20, 4, 1960});
	vec.push_back({15, 2, 1970});
	vec.push_back({10, 1, 2000});

	// sort(vec.begin(), vec.end(), cmp);
	sort(v.begin(), v.end(), [](ob a, ob b) { //Lambda function or inline comparator
		return ((a.year > b.year) or (a.year == b.year and a.month > b.month) or (a.year == b.year and a.month == b.month and a.day > b.day));
	});

	for (auto it : vec) {
		cout << it.day << " " << it.month << " " << it.year << endl;
	}
	cout << endl;

	vector< pair<int, int>> vec2;
	vec2.push_back({10, 30});
	vec2.push_back({50, 40});
	vec2.push_back({100, 300});
	sort(vec2.begin(), vec2.end(), cmp2);
	for (auto it : vec2)
		cout << it.first << " " << it.second << endl;


	return 0;
}
/*
10 1 2000
10 1 2000
15 2 1970
20 4 1960

100 300
50 40
10 30
*/