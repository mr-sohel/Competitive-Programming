#include <stdio.h>
#include <string.h>

int main()
{
   char text[100], blank[100];
   int c = 0, d = 0,i;
   scanf("%[^\n]", text);
   for (i = 0; i < strlen(text); i++)
   {
       if (!(text[c] == ' '))
       {
           blank [d] = text[c];
           d++;
       }
       c++;
   }
   blank[d] = '\0';

  printf ("%s\n", blank);

   return 0;
}
