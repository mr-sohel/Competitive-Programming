#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

int* change() {
    int *px;
    px = (int*)malloc(sizeof(int)); //allocating space in heap memory
    *px = 30;
    return px;
}

int main() {
    int* px;
    px = change();
    cout << *px << endl;
}