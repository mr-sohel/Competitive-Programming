void solve() {
	string s;
	set <string> st;
	while (getline(cin, s)) { // getline inputs long string with spaces until newline;
		stringstream ss(s); // assign ss with s;
		string out;
		while (ss >> out) { // split the words and assign to out variable until end of ss;
			st.insert(out);
		}
	}
	for (auto i : st) cout << i << endl;
}
