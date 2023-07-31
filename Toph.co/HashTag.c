#include <stdio.h>

int main()
{
   char text[100], blank[100];
   int c = 0, d = 0;


   gets(text);

   while (text[c] != '\0')
   {
      if (!(text[c] == ' ')) {
        blank[d] = text[c];
        d++;
      }
      c++;
   }

   blank[d] = '\0';

  printf ("%s\n", blank);

   return 0;
}
