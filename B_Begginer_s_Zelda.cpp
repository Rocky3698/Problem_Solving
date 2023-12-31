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
vector<int> adj[N];
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
        In_range(i, 0, n - 1)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }
        int ans = 0;
        In_range(i, 0, N)
        {
            if (adj[i].size())
                for (auto x : adj[i])
                    cout << x << " ";
            // cout << endl;
        }
        cout << ans << endl;
    }

    return 0;
}