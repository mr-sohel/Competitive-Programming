#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001];
    char ch;
    int i,t;
    int count[26] = {0};
    int count2[26] = {0};
    scanf("%d", &t);
    while(t--)
    {
        scanf(" %[^\n]", s);
        for(i = 0; i < strlen(s); i++)
        {
            if(s[i] >= 'A' && s[i] <= 'Z')
            {
                count2[s[i] - 'A']++;
            }
        }
        for(i = 0; i < strlen(s); i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z')
            {
                count[s[i] - 'a']++;
            }
        }
        
        for(i = 0; i < 26; i++)
        {
            if(count2[i] != 0)
                printf("%c = %d\n",i+'A',count2[i]);
        }
        for(i = 0; i < 26; i++)
        {
            if(count[i] != 0)
                printf("%c = %d\n",i+'a',count[i]);
        }
        printf("\n");
        for(i = 0; i < 26; i++)
            count[i] = 0;
        for(i = 0; i < 26; i++)
            count2[i] = 0;
        
    }
    
}