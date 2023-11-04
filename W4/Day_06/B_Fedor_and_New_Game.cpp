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
int comp(int A, int B)
{
    int Count = 0;
    In_range(i, 0, 32) if (((A >> i) & 1) != ((B >> i) & 1))
        Count++;
    return Count;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m, k, ans = 0;
    cin >> n >> m >> k;
    vector<int> x;

    In_range(i, 0, m + 1)
    {
        int v;
        cin >> v;
        x.emplace_back(v);
    }

    In_range(i, 0, m) if (comp(x[i], x[m]) <= k)
        ans++;

    cout << ans << endl;

    return 0;
}