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

    ll n, a, b, c1, c2;
    cin >> n >> a >> b >> c1 >> c2;
    ll ans = (n / a) * c1;
    ans += (n / b) * c2;
    ll lcm = (a / __gcd(a, b)) * b;
    ll rem = (n / lcm);
    ans -= (min(c1, c2) * rem);
    cout << ans << endl;

    return 0;
}