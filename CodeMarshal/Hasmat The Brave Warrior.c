#include<stdio.h>
int main()
{
      __int64_t hs,os;
      while(scanf("%lld %lld",&hs,&os)==2){
            if(hs>os)
                  printf("%lld\n",hs-os);
                  else
                  printf("%lld\n",os-hs);
      }
      return 0;
}