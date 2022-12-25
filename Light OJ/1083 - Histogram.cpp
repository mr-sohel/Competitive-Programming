/**
 *	Author:  Sohel Rana
 *	Date:    2022-05-30 
 *	Task:    test 
**/
#include <bits/stdc++.h>
#define endl		'\n'
#define sqr(x)		(x) * (x)
#define gcd(x,y)	__gcd(x, y)
#define lcm(x,y)	((x/gcd(x,y)) * y)
#define pf		    push_front
#define pb		    push_back
#define fi          first
#define se          second
#define mp          make_pair
#define all(x)		(x).begin(), (x).end()
#define rall(x)		(x).rbegin(), (x).rend()
#define sz(x)		(long long)x.size()
#define prec(x) 	fixed<<setprecision(x)
#define debug(x)	cerr<<#x<<" = "<<(x)<< endl
#define debug2(x,y)	cerr<<#x<<" = "<<(x)<<","<<#y<<" = "<<(y)<< endl
#define unsyncIO	ios_base::sync_with_stdio(false); cin.tie(nullptr)

using ll = long long;
using db = double;
using ld = long double;
using ull = unsigned long long;

const ld pi = acos((ld)-1);
const int mod = 1e9+7;
const ll inf = 1e18;
const ld eps = 1e-9;
const int mx = 30000+5;

using namespace std;


ll ara[mx], Right[mx], Left[mx];

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    unsyncIO;
    int t;
    cin>>t;
    for(int tc = 1; tc <= t; tc++) {
        int n;
        cin >> n;
        ara[n+1] = 0;
        for(int i = 1;i <= n;i++)cin >> ara[i];
        
        stack<int>leftStack , rightStack;
        
        leftStack.push(0);
        for(int i = 1;i <= n;i++){
            while(!leftStack.empty() and ara[leftStack.top()] >= ara[i]){
                leftStack.pop();
            }
            Left[i] = leftStack.top();
            leftStack.push(i);
        }
        rightStack.push(n + 1);
        
        for(int i = n;i >= 1;i--){
            while(!rightStack.empty() and ara[rightStack.top()] >= ara[i]){
                rightStack.pop();
            }
            Right[i] = rightStack.top();
            rightStack.push(i);
        }
        ll MAX = INT_MIN;
        for(int i = 1;i <= n;i++){
            ll height = ara[i];
            ll width = Right[i] - Left[i] - 1;
            ll area = height * width;
            MAX = max(area, MAX);
        }
        cout<<"Case "<<tc<<": "<<MAX<<endl;
    }
    //return 0;
}