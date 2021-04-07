#include <bits/stdc++.h>
using namespace std;

class pack{
    public:
    int n, *arry, large = INT_MIN;

    void get_value(){
        cin >> n;
        arry = (int*) malloc(sizeof(int) * n);
        for(int i = 0; i < n; i++) cin >> arry[i];
    }

    void SORT(){
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(arry[i] > arry[j]){
                    int tmp = arry[i];
                    arry[i] = arry[j];
                    arry[j] = tmp;
                }
            }
        }
    }
    
    void get_large_value(){
        for(int i = 0; i < n; i++){
            if(arry[i] > large) large = arry[i];
        }
    }
};

class show: public pack{
    public:
    void print_array(){
        for(int i = 0; i < n; i++) cout << arry[i] << " ";
        cout << endl;
    }
    
    void print_value(){
        cout << large << endl;
    }
};

int main(){
    show ob;
    ob.get_value();
    ob.SORT();
    ob.get_large_value();
    ob.print_array();
    ob.print_value();

    return 0;
}