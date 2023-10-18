#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long;
#define For(i, s, n) for (int i = s; i < n; i++)
typedef pair<int, int> pii;
const int INF = 1e9 + 7;
const int N = 1e5 + 5;
const int M = 1e3 + 5;
int i, j;
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        string s;
        cin >> s;
        long long op = 0, maxs = 0;
        vector<long long> v;
        For(i, 0, n)
        {
            long long l = i, r = n - 1 - i;
            if (s[i] == 'R')
            {
                if (l > r)
                {
                    op++;
                    v.push_back(l - r);
                    maxs += l;
                }
                else
                    maxs += r;
            }
            else
            {
                if (r > l)
                {
                    op++;
                    v.push_back(r - l);
                    maxs += r;
                }
                else
                    maxs += l;
            }
        }
        long long ans[n];
        For(i, op - 1, n) ans[i] = maxs;
        sort(v.begin(), v.end());
        for (int i = op - 2, j = 0; i >= 0, j < v.size(); i--, j++)
            ans[i] = ans[i + 1] - v[j];
        For(i, 0, n) cout << ans[i] << " ";
        cout << endl;
    }

    return 0;
}