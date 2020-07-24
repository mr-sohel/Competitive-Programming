#include <bits/stdc++.h>

using namespace std;

int isPrime(int n){
        int i,sqrt_n,flag=1;
                sqrt_n=(int)sqrt(n); 
                sqrt_n++;
        if(n<2){
                return 0; 
        }
        else{
                if(n==2){
                        return 1;
                }
                else if(n%2==0)
                        return 0;
        }
        for(i=3;i<sqrt_n;i=i+2){
                if(n%i==0){
                        flag=0;
                        break;
                }
        }
        return flag; 
}
int main(){
    long long x,y;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        for(int j = x ; j <= y; j++)
        {
            int count=1;
            int i,n;
                     
            i=3;
                
            while(count<i)
            {
                    if(isPrime(i)){
                            count++;
                    }
                    i=i+2;
            }
            printf("\nnth prime number is %d",i-2);
        }

    }
        
}