#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d\n", &n);
    long long a[n], sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%lld ",&a[i]);
            sum+= a[i];
    }
        if(sum<0)
        {
            printf("%lld",sum*-1);
        }
        else printf("%lld",sum);

    return 0;
}