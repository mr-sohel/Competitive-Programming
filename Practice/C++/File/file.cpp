#include <stdio.h>

int main()
{
    FILE *in,*out;//)
    int num1,num2;
    in = fopen("in.txt","r");
    out= fopen("out.txt","w");
   // fscanf(in,"%d %d", &num1,&num2);
   while(fscanf(in,"%d %d", &num1,&num2) != EOF)
   {
    fprintf(out,"The sum of %d + %d = %d\n", num1,num2, num1+num2);
   }

    fclose(in);
    fclose(out);
    out = fopen("out.txt", "a");
    fprintf(out,"\n\tTHE END\n");

    return 0;
}
