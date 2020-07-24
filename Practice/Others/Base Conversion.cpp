#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int binaryToDecimal(int n)
{
    int num = n;
    int dec_value = 0;
     
    // Initializing base value to 1, i.e 2^0
    int base = 1;
     
    int temp = num;
    while (temp)
    {
        int last_digit = temp % 10;
        temp = temp/10;
         
        dec_value += last_digit*base;
         
        base = base*2;
    }
     
    return dec_value;
}
int hextodec(char hex[])
{
    //char hex[17];
    int decimal, place;
    int i = 0, val, len;

    decimal = 0;
    place = 1;

    /* Input hexadecimal number from user */
    //printf("Enter any hexadecimal number: ");
    //gets(hex);

    /* Find the length of total number of hex digit */
    len = strlen(hex);
    len--;

    /*
     * Iterate over each hex digit
     */
    for(i=0; hex[i]!='\0'; i++)
    {
 
        /* Find the decimal representation of hex[i] */
        if(hex[i]>='0' && hex[i]<='9')
        {
            val = hex[i] - 48;
        }
        else if(hex[i]>='a' && hex[i]<='f')
        {
            val = hex[i] - 97 + 10;
        }
        else if(hex[i]>='A' && hex[i]<='F')
        {
            val = hex[i] - 65 + 10;
        }

        decimal += val * pow(16, len);
        len--;
       
    }
 return decimal;
}
void Tobin(int n)
{
    int a[1000];
    int i = 0;
    while(n > 0)
    {
        a[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        cout<<a[j];
    }
    cout<<" bin"<<endl;
}
int main()
{
    int t;
    string base;
    char num[50] = "\0";
    cin>>t;
    for(int i = 0; i < t; i++)
    {
        cin>>num;
        cin>>base;
        int value = 0;
        cout<<"Case "<<i+1<<":"<<endl;
        if(base == "bin")
        { 
            value = atoi(num);
            int dec = binaryToDecimal(value);
            cout<<dec<<" dec"<<endl;
            //ToHex(num);
            std::cout << std::hex << dec <<" hex"<<endl;
        }
        else if(base == "hex")
        {
            int x = hextodec(num);
            cout<<x<<" dec"<<endl;
            Tobin(x);
        }
        else if(base == "dec")
        {       
            value = atoi(num);
            std::cout << std::hex << value <<" hex"<<endl;
            Tobin(value);
        }
        cout<<endl;
    }
    return 0; 
}