#include <bits/stdc++.h>
using namespace std;

float squareRoot(float n)
{
	float x = n;
	float y = 1;
	float e = 0.000001;
	while(x - y > e) {
		x = (x + y)/2;
		y = n/x;
	}
	return x;
}

int main()
{
	int t, n;
	scanf("%d", &t);
	while(t--) {
		scanf("%d",&n);
		printf ("%.0f\n",squareRoot(n));
	}
	
	return 0;
}
