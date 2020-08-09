#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,total = 0,cr = 0,rat = 0,frog = 0;
    char c,r,s;
    cin>>t;
    while(t--)
    {
        char ch;
        int temp;
        cin>>temp>>ch;
        if(ch == 'C')
            cr += temp;
        else if(ch == 'R')
            rat += temp;
        else if(ch == 'S')
            frog += temp;
    }
   total = cr + rat + frog;
   double per;
   char p = '%';
   per = 100.0/total;
   printf("Total: %d cobaias\n",total);
   printf("Total de coelhos: %d\n",cr);
   printf("Total de ratos: %d\n",rat);
   printf("Total de sapos: %d\n",frog);
   printf("Percentual de coelhos: %.2lf %c\n",per*cr,p);
   printf("Percentual de ratos: %.2lf %c\n",per*rat,p);
   printf("Percentual de sapos: %.2lf %c\n",per*frog,p);
}