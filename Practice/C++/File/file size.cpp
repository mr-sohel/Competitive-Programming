#include <bits/stdc++.h>

using namespace std;

int main()
{
    FILE *fp_in;
    fp_in = fopen("dimik.jpg", "rb");
    if (fp_in == NULL)
    {
        perror("File Opening Failed");
        return EXIT_FAILURE;
    }
    fseek(fp_in,0,SEEK_END);
    printf("File size: %ld Bytes\n", ftell(fp_in));
    printf("File size: %ld Kilo Bytes\n", ftell(fp_in)/1024);
    fclose(fp_in);
}
