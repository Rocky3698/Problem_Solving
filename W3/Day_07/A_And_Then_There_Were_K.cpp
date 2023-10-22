#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int cnt = 0;
        while (n > 1)
        {
            n >>= 1;
            cnt++;
        }
        int p = 1 << cnt;
        cout << p - 1 << endl;
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n, x;
        scanf("%d", &n);
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
        }
        scanf("%d", &x);
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == x)
            {
                printf("YES\n");
                break;
            }
            if (j == n - 1)
                printf("NO\n");
        }
    }

    return 0;
}