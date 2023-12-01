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

    int n;
    cin >> n;
    ll ans = 0, sum = 0, rem;
    map<ll, ll> m;
    m[0] = 1;
    In_range(i,0,n)
    {
        int a;
        cin >> a;
        sum += a;
        rem = ((n + (sum % n)) % n);
        ans += m[rem];
        m[rem]++;
    }
    cout << ans << endl;

    return 0;
}