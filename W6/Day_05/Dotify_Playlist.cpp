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
        int n, k, l;
        cin >> n >> k >> l;
        vector<pair<int, int>> s(n);
        In_range(i, 0, n)
        {
            int x, y;
            cin >> x >> y;
            s.push_back({x, y});
        }
        sort(s.rbegin(), s.rend());
        int len = 0;
        for (int i = 0; i < n && k; i++)
        {
            if (s[i].second == l)
            {
                k--;
                len += s[i].first;
            }
        }
        cout << (k ? -1 : len) << endl;
    }

    return 0;
}