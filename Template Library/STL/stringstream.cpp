void solve() {
	string s;
	getline(cin, s); // getline inputs long string with spaces until newline;
	stringstream ss(s); // assign ss with s;
	string out;
	while (ss >> out) { // split the words and assign to out variable until end of ss;
		cout << out;
	}
}
