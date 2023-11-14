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
int ld(vector<int> a, int i)
{
    return abs(a[i] - a[i - 1]);
}
int rd(vector<int> a, int i)
{
    return abs(a[i] - a[i + 1]);
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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<pii> v(n);
        v[0] = {rd(a, 0), rd(a, 0)};
        v[n - 1] = {ld(a, n - 1), ld(a, n - 1)};
        In_range(i,1,n-1)
        {
            v[i] = {ld(a, i), rd(a, i)};
        }

        int f = 0;
        In_range(i,1,v.size())
        {
            int x = max(v[i].first, v[i].second),
                y = max(v[f].first, v[f].second);
            if (x < y)
                f = i;
        }
        cout << max(v[f].first, v[f].second) << endl;
    }

    return 0;
}