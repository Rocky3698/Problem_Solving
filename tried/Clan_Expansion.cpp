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

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int arr[n];
//         In_range(i, 0, n) cin >> arr[i];
//         int lp[n + 1];
//         int ans[n + 1];
//         In_range(i, 0, n + 1)
//         {
//             lp[i] = -1;
//             ans[i] = -1;
//         }
//         In_range(i, 0, n)
//         {
//             if (lp[arr[i]] == -1)
//             {
//                 lp[arr[i]] == i;
//                 if (ans[i] == -1)
//                     ans[i] = i;
//                 else
//                     ans[arr[i]] = max(ans[arr[i]], i);
//             }
//             else
//             {
//                 lp[arr[i]] = (i - lp[arr[i]]) / 2;
//                 if (ans[i] == -1)
//                     ans[i] = i;
//                 else
//                     ans[arr[i]] = max(ans[arr[i]], lp[arr[i]]);
//             }
//         }
//         int an=0;
//         In_range(i,0,n+1){
//             ans[i]=max(ans[i],n-1-lp[i]);
//             an=min(an,ans[i]);
//         }
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

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        vector<int> lp(n + 1, -1);
        vector<int> days(n + 1, -1);
        In_range(i, 0, n)
                cin >>
            arr[i];
        In_range(i, 0, n)
        {
            if (lp[arr[i]] < 0)
                lp[arr[i]] = days[arr[i]] = i;
            else
            {
                int nd = (i - lp[arr[i]]) / 2;
                days[arr[i]] = max(days[arr[i]], nd);
                lp[arr[i]] = i;
            }
        }
        int md = INT_MAX, cc = -1;
        In_range(i, 1, n + 1)
        {
            if (days[i] >= 0)
            {
                int nd = n - 1 - lp[i];
                days[i] = max(days[i], nd);
                if (days[i] < md)
                {
                    md = days[i];
                    cc = i;
                }
            }
        }
        cout << cc << " " << md << endl;
    }

    return 0;
}