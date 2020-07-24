#include<cstdio>
int main(void){
int a, b;
scanf("%d %d", &a, &b);

 if(a%2==0 || b%2!=0)
    puts("yes");
else //if(a%2!=0 || b%2==0)
    puts("no");
return 0;
}