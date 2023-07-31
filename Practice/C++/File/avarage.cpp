#include <stdio.h>

int main()
{
    FILE *math, *english, *bangla,*out;
    math = fopen("math.txt", "r");
    english = fopen("english.txt", "r");
    bangla = fopen("bangla.txt", "r");
    out = fopen("output.txt", "w");
    float avg;
    int math1[11],math2[11],english1[11],english2[11],bangla1[11],bangla2[11];
    int i = 0,j = 0;
    while(fscanf(math,"%d %d", &math1[i],&math2[j]) != EOF)
    {
        i++;j++;
    }

    i = 0,j = 0;
    while(fscanf(english,"%d %d", &english1[i],&english2[j]) != EOF)
    {
        i++;j++;
    }

     i = 0,j = 0;
    while(fscanf(bangla,"%d %d", &bangla1[i],&bangla2[j]) != EOF)
    {
        i++;j++;
    }

    for (i = 0; i < 10; i++)
    {
        fprintf(out,"%d --> %.2f\n",i+1, (math2[i] + bangla2[i] + english2[i])/3.0);
    }



}
