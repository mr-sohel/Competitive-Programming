#include <stdio.h>

int main()
{
    FILE *in,*out;
    char *infile = "in.txt";
    char *outfile = "out.txt";
    char line[80];
    in = fopen(infile, "r");
    out = fopen(outfile, "w");
    int a,b,sum;
    fgets(line,80,in);
    printf("Line: %s\n",line);


    sscanf(line,"%d %d", &a,&b);
    sum = a + b;
    printf("%d %d %d\n", a,b,sum);
    fprintf(out,"The sum is %d + %d = %d\n", a,b,sum);

    fclose(in);
    fclose(out);
    return 0;


}
