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
//         long long pre[n];
//         In_range(i, 0, n)
//         {
//             cin >> arr[i];
//             if (i == 0)
//                 pre[i] = arr[i];
//             else
//                 pre[i] = arr[i - 1] + arr[i];
//         }
//         vector<int> v;
//         for (int i = 1; i * i <= n; i++)
//         {
//             if (n % i == 0)
//             {
//                 v.push_back(i);
//                 if (n / i != i)
//                     v.push_back(i);
//             }
//         }
//         sort(v.begin(),v.end());
//         long long ans=0;
//         for(int x:v){
//             In_range(i,0,n){
//                 ans=max(ans,abs((pre[(x-1)*(i+1)])-(abs(pre[(x-1)*(i+1)]-pre[x*(i+2)]))));
//             }
//         }
//         cout<<ans<<endl;
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
        ll n;
        cin >> n;
        vector<ll> v, div;
        In_range(i, 0, n)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        for (int i = 1; (i * i) <= n; i++)
        {
            if (n % i == 0)
            {
                div.push_back(i);
                if ((i > 1) && (n / i != i))
                    div.push_back(n / i);
            }
        }
        ll ans = 0;
        In_range(i, 0, div.size())
        {
            ll cur = 0, cc = 0;
            ll mn = LONG_LONG_MAX, mx = LONG_LONG_MIN;
            In_range(j, 0, n)
            {
                cur += v[j];
                cc++;
                if (cc == div[i])
                {
                    mn = min(mn, cur);
                    mx = max(mx, cur);
                    cur = cc = 0;
                }
            }
            ans = max(ans, (mx - mn));
        }
        cout << ans << endl;
    }

    return 0;
}
