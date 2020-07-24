#include <bits/stdc++.h>

using namespace std;

int main()
{
    int return_value;
    return_value = remove("image copy.o");
    if (return_value != 0)
    {
        perror("File Remove Failed");
    }
   else if(return_value == 0)
    {
        printf("File Removed Successfully\n");

        //return 1;
    }


    return 0;
}
