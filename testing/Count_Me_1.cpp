#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int TwoCount = 0;
    int ThreeCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            TwoCount++;
        }
        else if (a[i] % 3 == 0)
        {
            ThreeCount++;
        }
    }
    printf("%d %d", TwoCount, ThreeCount);
}