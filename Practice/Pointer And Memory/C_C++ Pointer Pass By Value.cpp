#include <iostream>

#include <stdio.h>

using namespace std;
void change(int x)
{
    x = 10; // it change the value of x 58 to 10 it's a local variable of change function
    printf("%d\n", x); // it prints the value of x which is 10; 
}
int main()
{
    int x = 58; // x is a local variable of main function
    change(x); // pass the value of x to change function.
    printf("%d\n", x); // it's print the value of x which is 58;
    return 0;
}