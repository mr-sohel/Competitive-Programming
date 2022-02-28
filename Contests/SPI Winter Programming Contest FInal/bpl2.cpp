#include<bits/stdc++.h>
using namespace std;
bool isball(char ch)
{
    if(ch=='O') return true;
    int a = ch-'0';
    return (a>=0 && a<=6);
}
int main()
{
    int tc,a,b,c,i;
    scanf("%d",&tc);
    getchar();
    string str;
    while(tc--){
        cin>>str;
        a=0;
        for( i = str.size()-1; i>=0; i--){
            if(isball(str[i]))a++;
        }
        b = a/6;
        c = a%6;
        printf("%d BALLS\n",a);
        if(b>0){
            printf("%d OVER",b);
            if(c>0) printf(" %d BALLS",c);
            printf("\n");
        }
    }
    return 0;
}
