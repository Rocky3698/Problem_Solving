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
    cin.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll c[n + 1];
        In_range(i, 1, n + 1)
        {
            cin >> c[i];
        }

        if (n == 1)
        {
            cout << c[n] - 1 << "\n";
            continue;
        }

        vector<ll> a;
        a.push_back(1);
        In_range(i, 1, n + 1)
        {
            if (a.back() != c[i])
            {
                a.push_back(c[i]);
            }
        }
        ll ans = 0;
        In_range(i, 0, a.size() - 1)
        {
            if (a[i + 1] > a[i])
            {
                ans += (a[i + 1] - a[i]);
            }
        }
        cout << ans << "\n";
    }

    return 0;
}
