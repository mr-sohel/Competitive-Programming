#include <bits/stdc++.h>
#define endl "\n"
#define pi acos(-1)
#define faster_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


using namespace std;

int main()
{
    //freopen("/home/sohel/Documents/My Repository/my_codes/out.txt", "wt", stdout);
    faster_io;
    int n,sereja = 0, dima = 0, left, right;
    cin>>n;
    int ar[n];
    for(int i = 0; i < n; i++)
        cin>>ar[i];
    
    right = n-1;
    left = 0; 
    bool check = true;
    for(int i = 0; i < n; i++) {
      
        
        if(ar[right] > ar[left]) {
            if(check) {
                sereja += ar[right];
                check = false;
                right--;
            }
            else if(check == false) {
                dima += ar[right];
                check = true;
                right--;
            } 
        }
        else {
            if(check) {
                sereja += ar[left];
                check = false;
                left++;
            }
            else if(check == false) {
                dima += ar[left];
                check = true;
                left++;
            }            
        }
    }

    cout<<sereja<<' '<<dima<<endl;
    
    return 0;
}

