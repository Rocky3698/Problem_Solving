#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define In_range(i, s, n) for (int i = s; i < n; i++)
typedef pair<int, int> pii;
const int INF = 1e9 + 7;
const int N = 2 * (1e5 + 5);
const int M = 1e3 + 5;
int i, j;

vector<ll> adj[N];
vector<ll> leaf;

void Dfs(int node, int parent)
{
    if (node != 1 && adj[node].size() == 1)
        leaf[node] = 1;
    for (auto child : adj[node])
    {
        if (child == parent)
            continue;
        Dfs(child, node);
        leaf[node] += leaf[child];
    }
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
        ll n;
        cin >> n;
        for (int i = 0; i < N; i++)
            adj[i].clear();
        leaf.assign(n + 1, 0);
        for (int i = 0; i < n - 1; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Dfs(1, -1);
        ll q;
        cin >> q;
        while (q--)
        {
            ll x, y;
            cin >> x >> y;
            cout << leaf[x] * leaf[y] << endl;
        }
    }

    return 0;
}