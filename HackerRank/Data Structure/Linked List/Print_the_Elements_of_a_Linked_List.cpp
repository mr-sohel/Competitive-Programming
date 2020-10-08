/**
 *    Author:  Sohel Rana
 *    Date:    2020-10-08 23:12:53
 *	  Link:    https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list/problem
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
    Node* next;
};

Node* head;

void insert(int value) {
    Node* temp = (Node*) malloc(sizeof(Node));
    temp->data = value;
    temp->next = NULL;
    if(head == NULL) {
        head = temp;
    } else {
        Node* t = head;
        while(t->next != NULL) {
            t = t->next;
        }
        t->next = temp;
    }
}

void print() {
    Node* temp;
    temp = head;
    while (temp != NULL) {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int main()
{
    //freopen("/home/taalpatar_shepai/Documents/my_codes/out.txt", "w", stdout);
    //unsyncIO;
    head = NULL;
    int t;
    cin >> t;
    while (t--) {
        int tx;
        cin >> tx;
        insert(tx);
    }
    print();
    return 0;
}
