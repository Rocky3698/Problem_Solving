// #include <bits/stdc++.h>
// using namespace std;
// #define endl "\n"
// #define For(i, s, n) for (int i = s; i < n; i++)
// typedef pair<int, int> pii;
// const int INF = 1e9 + 7;
// const int N = 1e5 + 5;
// const int M = 1e3 + 5;
// int i, j;
// int GCD(int a, int b)
// {
//     if (b == 0 || a == 0)
//         return a | b;
//     if (a == b)
//         return a;
//     if (a > b)
//         return GCD(a % b, b);
//     else
//         return GCD(a, b % a);
// }
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);

//     // int n=67495675;
//     // int a=floor(n/pow(10,5));
//     // cout<<a%10<<endl;
//     int a, b;
//     cin >> a >> b;
//     cout << GCD(a, b);

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main()
// {

//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for(int i=0;i<n;i++)scanf("%d",&arr[i]);
//     int x,v;
//     scanf("%d %d",x,v);
//     arr[x]=v;
//     for(int i=n-1;i>=0;i--)printf("%d ",arr[i]);

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// #define endl "\n"
// #define ll long long
// #define In_range(i, s, n) for (int i = s; i < n; i++)
// typedef pair<int, int> pii;
// const int INF = 1e9 + 7;
// const int N = 1e5 + 5;
// const int M = 1e3 + 5;
// int i, j;
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);

//     int a = 0;
//     while (a > a++)
//     {
//         cout << " " << ++a;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define In_range(i, s, n) for (int i = s; i < n; i++)
typedef pair<int, int> pii;
const int INF = 1e9 + 7;
const int N = 1e5 + 5;
const int M = 1e3 + 5;
int i, j;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
