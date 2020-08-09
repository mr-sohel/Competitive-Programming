#include <stdio.h>
#include <string.h>
int main()
{
    char str1[22], str2[22], str3[22];
    char one1[] = "vertebrado", one2[] = "invertebrado", two1[] ="ave";
    char three1[] = "carnivoro", three2[] ="onivoro",three[] = "herbivoro";
    char a1[] = "augio",a2[] = "pomba", a3[] = "homem", a4[] = "vaca", a5[]="pulga",a6[]="lagarta",a8[] = "minihoca",a7[] = "sanguessuga", two2[] = "inseto",two3[] = "anelideo", three3[] = "hematofago", mamifero[] = "mamifero";
    scanf("%s", &str1);
    if(0 == strcmp(str1,one1))
    {
        scanf("%s", &str2);
        if(0 == strcmp(str2, two1))
        {
            scanf("%s", &str3);
            if(0 == strcmp(str3, three1))
            {
                printf("%s\n", a1);
            }
            else if(0 == strcmp(str3, three2))
            {
                printf("%s\n", a2);
            }
        }
       if(0 == strcmp(str2, mamifero))
        {
            scanf("%s", &str3);
            if(0 == strcmp(str3, three2))
            {
                printf("%s\n", a3);
            }
            else if (0 == strcmp(str3, three))
            {
                printf("%s\n", a4);
            }
        }
    }
    if (0 == strcmp(str1, one2))
    {
        scanf("%s", &str2);
        if(0 == strcmp(str2, two2))
        {
            scanf("%s", &str3);
            if(0 ==strcmp(str3, three3))
            {
                printf("%s\n", a5);
            }
            else if (0 == strcmp(str3, three))
            {
                printf("%s\n", a6);
            }

        }
        if (0 == strcmp(str2, two3))
        {
            scanf("%s", &str3);
            if(0 == strcmp(str3, three3))
            {
                printf("%s\n", a7);
            }
            else if (0 == strcmp(str3, three2))
            {
                printf("%s\n", a8);
            }
        }
    }
    return 0;

}
