#include <bits/stdc++.h>
using namespace std;

int main()
{
    int dif,t,i,j,ck = 0,rrc=0,rcount = 0;
    int cnt[10];
    char phone[11];
    cin>>t;
    while(t--)
    {
        scanf("%s", phone);
        for(i = 0; i < strlen(phone); i++)
        {
            if(phone[i] < phone[i+1])
            {
                dif = (phone[i+1]) - phone[i];
                
                if(dif == 1)
                    rcount++; 
            }   
        }
        if (rcount == 3)
            rcount++;
        if (rcount >= 4)
        {
            cout<<"Fancy"<<endl;
            rcount = 0;
            continue;
            
        }
        for(i = 0; i < strlen(phone); i++)
        {
            if(phone[i] == phone[i+1])
            {
                if(phone[i+1] == phone[i+2])
                { 
                    cout<<"Fancy"<<endl;
                    break;
                }

            }
                
                    
        }
        for(i = 0; i < strlen(phone); i++)
        {
            if(phone[i] == phone[i+1])
                rrc++;
        }
        if(rrc >= 2)
        {
             cout<<"Fancy"<<endl;
             rrc = 0;
             continue;
        }
        for (i = 0; i < strlen(phone); i++)
        {
            for(j = 0; j < strlen(phone); j++)
            {
                if (phone[i] == phone[j])
                    cnt[i]++;
            }
        }
        for(i = 0; i < 10; i++)
        {
            if(cnt[i] >= 5)
            {
                cout<<"Fancy"<<endl;
                break;
            }
            
        }   
        if(rcount < 4 && rrc < 2  )
            cout<<"Not Fancy"<<endl; 
        }
    return 0;
}