#include <stdio.h>
#include <string.h>
int main()
{

    char s[100001];
    scanf("%s", s);
    int consonent = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
        {
            consonent++;
        }
    }
    printf("%d", consonent);
    return 0;
}