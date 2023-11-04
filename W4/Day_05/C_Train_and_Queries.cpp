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
        int n, k, u;
        cin >> n >> k;
        map<int, pair<int, int>> p;
        for (int i = 0; i < n; i++)
        {
            cin >> u;
            if (p.find(u) == p.end())
                p[u] = {i, i};
            else
                p[u].second = i;
        }
        int a, b;
        while (k--)
        {
            cin >> a >> b;
            if ((p.find(a) != p.end()) && (p.find(b) != p.end()) && (p[a].first <= p[b].second))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}