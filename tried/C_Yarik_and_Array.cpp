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
int mS(vector<int> v, int l, int r)
{
    ll Mx = LONG_LONG_MIN, s = 0;
    for (int i = l; i < r; i++)
    {
        s += v[i];
        Mx = max(Mx, s);
        s = max(s, 0LL);
    }
    return Mx;
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
        ll n;
        cin >> n;
        vector<int> v;
        In_range(i, 0, n)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }

        ll ans = LONG_LONG_MIN, x = 0;
        In_range(i, 1, n)
        {
            if (abs(v[i - 1]) % 2 == abs(v[i]) % 2)
            {
                ans = max(ans, (ll)mS(v, x, i));
                x = i;
            }
        }
        ans = max(ans, (ll)mS(v, x, n));
        cout << ans << endl;
    }

    return 0;
}
