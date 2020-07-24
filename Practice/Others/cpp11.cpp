#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<string,3> myarray;// {10,20,30};
    cin>>myarray[0]>>myarray[1]>>myarray[2];
    for(auto x: myarray)
        cout<<x<<' ';
}
