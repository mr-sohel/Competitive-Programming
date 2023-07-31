/**
 *	Author:  Sohel Rana
 *	Date:    2020-10-24 21:37:31
 *	Task:    stack 
**/
#include <bits/stdc++.h>
#define endl        '\n'
#define db          double
#define ld          long double
#define ll          long long
#define ull         unsigned long long
#define sqr(x)      (x) * (x)
#define gcd(a, b)   __gcd(a, b)
#define lcm(a, b)   ((a/gcd(a,b)) * b)
#define pf(x) 		push_front(x)
#define pb(x)       push_back(x)
#define eb(x)		emplace_back(x)
#define all(x)      (x).begin(), (x).end()
#define rall(x) 	(x).rbegin(), (x).rend()
#define sz(x) 		(int)x.size()
#define debug(x) 	cerr << #x << " = " << (x) << endl
#define debug2(x,y) cerr << #x << " = " << (x)<< "," << #y << " = " <<(y)<< endl
#define unsyncIO    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const ll INF = 1e18;
const int Max = 101;
using namespace std;
int A[Max];
int top = -1;

void push(int value) {
    if (top == Max - 1) {
        printf("Stack Overflow\n");
        return;
    }
    top++;
    A[top] = value;
    
}

void pop() {
    if(top == -1) {
        printf("Stack is empty\n");
        return;
    }
    top--;
}
int Top() {
    return A[top];
}
bool isEmpty() {
    if(top == -1)
        return true;
    return false;
}
void print() {
    printf("Stack: ");
    for (int i = 0; i <= top; i++)
        printf("%d ", A[i]);
    printf("\n");
    // for (int i = top; i >= 0; i--) printf("%d ", A[i]);
    // printf("\n");
}

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    push(2); print();
    push(5); print();
    push(10); print();
    pop(); print();
    push(12); print();

    return 0;
}
