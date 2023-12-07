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
        ll a = ceil(((n * 1.0) - 4.0) / 3);
        if (3 * a + 3 == n)
            cout << a << " " << a + 1 << " " << a + 2 << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}