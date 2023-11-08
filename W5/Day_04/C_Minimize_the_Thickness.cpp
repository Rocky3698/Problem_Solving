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
        int n;
        cin >> n;
        vector<int> a(n + 1), pre(n + 1);
        int sum = 0, ans = n;
        In_range(i, 1, n + 1)
        {
            cin >> a[i];
            sum += a[i];
            pre[i] = a[i];
            if (i)
                pre[i] += pre[i - 1];
        }
        In_range(i, 1, n + 1)
        {
            if (sum % pre[i])
                continue;
            int last = 0, res = -1;
            In_range(j, 1, n + 1)
            {
                int s = pre[j] - pre[last];
                if (s > pre[i])
                {
                    res = -1;
                    break;
                }
                if (s == pre[i])
                {
                    res = max(res, (j - last));
                    last = j;
                }
            }
            if (res != -1)
                ans = min(ans, res);
        }
        cout << ans << endl;
    }

    return 0;
}