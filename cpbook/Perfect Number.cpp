#include <iostream>

using namespace std;

int main()
{
   int t;
   string n;
   string pn[8] = {"6", "28", "496", "8128","33550336","8589869056","137438691328", "2305843008139952128"};
   cin>>t;
   while(t--)
   {
       bool check = false;
       cin>>n;
       for(int i = 0; i < 8; i++)
       {
           if(n == pn[i])
                check = true;    
       }
       if(check)
            cout<<"YES, "<<n<<" is a perfect number!"<<endl;
        else
            cout<<"NO, "<<n<<" is not a perfect number!"<<endl;
       
   }
    return 0;
}