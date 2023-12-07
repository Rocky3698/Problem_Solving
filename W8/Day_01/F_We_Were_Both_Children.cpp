#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define In_range(i, s, n) for (int i = s; i < n; i++)
typedef pair<int, int> pii;
const int INF = 1e9 + 7;
const int N = 200001;
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
        ll num[N] = {0};
        ll sum[N] = {0};
        In_range(i, 0, n)
        {
            ll a;
            cin >> a;
            if (a <= n)
                num[a]++;
        }
        ll ans = 0;
        In_range(i, 1, n + 1)
        {
            for (int j = i; num[i] && j <= n; j += i)
                sum[j] += num[i];
            ans = max(ans, sum[i]);
        }
        cout << ans << endl;
    }
    return 0;
}