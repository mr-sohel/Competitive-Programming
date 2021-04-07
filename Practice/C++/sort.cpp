#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;  cin >> n;
    int *arry = (int*)  malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++) cin >> arry[i];

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arry[i] > arry[j]) {
                int tmp = arry[i];
                arry[i] = arry[j];
                arry[j] = tmp; 
            }
        }
    }
    for(int i = 0; i < n; i++) cout << arry[i] << " ";
    cout << endl;
    return 0;
}