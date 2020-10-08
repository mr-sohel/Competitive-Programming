/**
 *    Author:  Sohel Rana
 *    Date:    2020-10-08 21:55:55
 *	  Link:    link
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
#define debug(x) 	cerr << #x << " = " << (x) <<endl
#define unsyncIO    ios_base::sync_with_stdio(0); cin.tie(0)

const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const ll INF = 1e18; 

using namespace std;

struct Node {
    int data;
    Node* link;
};

Node* head;

void insert(int value) {
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = value;
    temp->link = head;
    head = temp;
}
void print() {
    Node* temp;
    temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->link;
    }
    puts("");
}
int main() {
    //freopen("/home/taalpatar_shepai/Documents/my_codes/out.txt", "w", stdout);
    //unsyncIO;
    head = NULL;
    insert(1);
    insert(3);
    insert(4);
    print();
    return 0;
}
