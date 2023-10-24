#include <stdio.h>
#include <string.h>
int main()
{

    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        char s[10001];
        scanf("%s", s);
        int Capital = 0;
        int small = 0;
        int digit = 0;
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] <= 'z' && s[i] >= 'a')
            {
                small++;
            }
            else if (s[i] >= '0' && s[i] <= '9')
            {
                digit++;
            }
            else
                Capital++;
        }
        printf("%d %d %d\n", Capital, small, digit);
    }

    return 0;
}