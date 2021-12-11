#include<bits/stdc++.h>
 
#define    pi          acos(-1) 
#define    all(x)      (x).begin(),(x).end()
#define    fill(x,y)   memset(x, y, sizeof(x))
#define    trace(x)    cout << #x << " = " << x << endl
#define    bug         cout << "Bug check" << endl
#define    endl        '\n'
 
using namespace std;
 
int main(){
	//freopen("in.txt","r", stdin);
	//freopen("out.txt","w", stdout);
 
	//ios::sync_with_stdio(0);
	//cin.tie(0);
 
	int n; cin >> n;
	double r; cin >> r;
 
	vector < pair<double,double> > v(n);
 
	for(int i=0;i<n;i++){
		double x,y; cin >> x >> y;
		v[i].first = x;
		v[i].second = y;
	}
 
	double d = sqrt((v[0].first-v[n-1].first)*(v[0].first-v[n-1].first) + (v[0].second-v[n-1].second)*(v[0].second-v[n-1].second));
    //cout << d << endl;
	for(int i=0;i<n-1;i++){
		d+= sqrt((v[i].first-v[i+1].first)*(v[i].first-v[i+1].first) + (v[i].second-v[i+1].second)*(v[i].second-v[i+1].second));
    }
    //cout << d << endl;

	d+= n*(2.0*pi*r/n);
 
	printf("%.2lf\n", d);
	return 0;
}