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

    ll n, x;
    cin >> n >> x;
    ll a[n], sum = 0, ans = 0;
    In_range(i, 0, n) cin >> a[i];

    map<ll, ll> m;
    m[0] = 1;
    for (auto i : a)
    {
        sum += i;
        ans += m[sum - x];
        m[sum]++;
    }
    cout << ans << endl;

    return 0;
}