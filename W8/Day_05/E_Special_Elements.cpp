#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define In_range(i, s, n) for (int i = s; i < n; i++)
typedef pair<int, int> pii;
const int INF = 1e9 + 7;
const int N = 1e5 + 5;
const int M = 1e3 + 5;
int i, j, l, r;
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
        int f[8001] = {0}, s[n + 1];
        In_range(i, 0, n + 1) s[i] = 0;
        In_range(i, 1, n + 1)
        {
            int a;
            cin >> a;
            s[i] = s[i - 1] + a;
            f[a]++;
        }
        int ans = 0;
        In_range(l, 1, n + 1)
        {
            In_range(r, l + 1, n + 1)
            {
                int c = s[r] - s[l - 1];
                if (c <= 0 || c > n)
                    continue;
                ans += f[c];
                f[c] = 0;
            }
        }
        cout << ans << endl;
    }

    return 0;
}