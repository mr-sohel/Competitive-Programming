/**
 *	Author:  Sohel Rana
 *	Date:    2022-01-25 12:50:21
 *	Task:    12148_Electricity 
**/
#include <bits/stdc++.h>
#define endl			'\n'
#define sqr(x)			(x) * (x)
#define gcd(x, y)		__gcd(x, y)
#define lcm(x, y)		((x/gcd(x,y)) * y)
#define pf(x) 	  		push_front(x)
#define pb(x)			push_back(x)
#define eb(x)			emplace_back(x)
#define all(x)      	(x).begin(), (x).end()
#define rall(x)			(x).rbegin(), (x).rend()
#define sz(x)			(int)x.size()
#define debug(x)		cerr<<#x<<" = "<<(x)<< endl
#define debug2(x,y) 	cerr<<#x<<" = "<<(x)<<","<<#y<<" = "<<(y)<< endl
#define unsyncIO    	ios_base::sync_with_stdio(false); cin.tie(nullptr)

using ll = long long;
using db = double;
using ld = long double;
using ull = unsigned long long;

const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const long long INF = 1e18;
const ld EPS = 1.0e-14;

using namespace std;

inline bool isleap(int year) {
    return (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0);
}

int main() 
{
	// freopen("input.txt", "r", stdin);
	// freopen("out.txt", "w", stdout);
	//unsyncIO;
	int n;
    while (cin >> n and n) {
        ull res = 0;
        int cdays = 0;
        int pred = 0 , prem = 0, prey = 0, prec = 0;
        for (int i = 0;i < n;i++) {
            int d, m, y, c;
            cin >> d >> m >> y >> c;
            //if 31 th dec and jan 1 (year change)
            if (pred == 31 and prem == 12 and d == 1 and m == 1 and y - prey == 1) {
                cdays++; res += (c - prec);
            }
            // If it is same year
            else if (prey == y and prem == m and d - pred == 1) {
                cdays++; res += (c - prec);
                
            }
            else if (isleap(prey) and prem == 2 and pred == 29) {
                if (d == 1 and m == 3 and prey == y) {
                    cdays++; res += (c - prec);
                }
            }
            else if (!isleap(prey) and prem == 2 and pred == 28) {
                if (d == 1 and m == 3 and prey == y) {
                    cdays++; res += (c - prec);
                }
            }
            //if 31 th jan and fab 1 
            else if (pred == 31 and prem == 1 and d == 1 and m == 2 and prey == y) {
                cdays++; res += (c - prec);
            }
            //if 31 th march and april 1 
            else if (pred == 31 and d == 1 and prem == 3 and m == 4 and prey == y) {
                cdays++; res += (c - prec);
            }
            //if 30 th april and may 1 
            else if (pred == 30 and d == 1 and prem == 4 and m == 5 and prey == y) {
                cdays++; res += (c - prec);
            }
            //if 31 th may and june 1 
            else if (pred == 31 and d == 1 and prem == 5 and m == 6 and prey == y) {
                cdays++; res += (c - prec);
            }
            //if 30 th june and july 1 
            else if (pred == 30 and d == 1 and prem == 6 and m == 7 and prey == y) {
                cdays++; res += (c - prec);
            }
            //if 31 th july and august 1 
            else if (pred == 31 and d == 1 and prem == 7 and m == 8 and prey == y) {
                cdays++; res += (c - prec);
            }
            //if 31 th august and septmber 1 
            else if (pred == 31 and d == 1 and prem == 8 and m == 9 and prey == y) {
                cdays++; res += (c - prec);
            }
            //if 30 th septmber and october 1 
            else if (pred == 30 and d == 1 and prem == 9 and m == 10 and prey == y) {
                cdays++; res += (c - prec);
            }
            //if 31 th october and november 1 
            else if (pred == 31 and d == 1 and prem == 10 and m == 11 and prey == y) {
                cdays++; res += (c - prec);
            }
            //if 30 th november and december 1 
            else if (pred == 30 and d == 1 and prem == 11 and m == 12 and prey == y) {
                cdays++; res += (c - prec);
            }
             // any consicutive days                
            pred = d, prem = m, prey = y, prec = c;
        }
        cout << cdays << " " << res << endl;
    }
    return 0;
}