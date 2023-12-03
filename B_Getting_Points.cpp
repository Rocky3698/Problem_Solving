#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define In_range(i, s, n) for (int i = s; i < n; i++)
typedef pair<int, int> pii;
const int INF = 1e9 + 7;
const int N = 1e5 + 5;
const int M = 1e3 + 5;
ll n, p, L, T, td;
int i, j;
bool isValid(ll d)
{
    ll day = n - d;
    ll x = day * L;
    if (2 * day >= td)
        x += (td * T);
    else
        x += (2 * day * T);
    return p <= x;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> p >> L >> T;
        td = ceil((double)n / 7.0);
        ll l = 0, r = n, mid, ans = 0;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (isValid(mid))
            {
                ans = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        cout << ans << endl;
    }

    return 0;
}